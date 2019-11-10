void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  // define all serials
  int n_tx = 2;                                         // the length of the 'serials' array
  HardwareSerial* serials[] = {&Serial, &Serial1};      // array with pointers to the serial connections
                                                        // the * operator is used to create an array of type HardwareSerial
                                                        // the & operator is used to get the pointers to the Serial objects 
                                                        // arduino mega: the serial connections are of type HardwereSerial
                                                        // arduino due; the serial connections are of type USARTClass but HardwareSerial works as well

  // initialize all serials
  for (int i = 0; i < n_tx; i++){
    serials[i]->begin(9600);                            // the arrow operator is used to call the member functions
  }

  // check if all serials are ready
  bool serial_ready = true;
  while (!serial_ready){
    serial_ready = true;
    for (int i = 0; i < n_tx; i++){
      serial_ready = serial_ready && *serials[i];       // dereference the HardwareSerial pointer
  }}

  // print 'hello world' to all serials
  for (int i = 0; i < n_tx; i++){
    serials[i]->println("hello world");               // again the arrow operator is used to call a member function
  }

  // another test message on serial[0]
  delay(10e3);
  for (int i = 0; i < n_tx; i++){
    (*serials[i]).println("2nd message after 10s");      // in this example the serial pointer is dereferenced with the * operator instead of the arrow operator
  }
}

void loop() {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);

}
