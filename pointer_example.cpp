// Example program
#include <iostream>

class entity{                                   // example clas
    public:
    int foo(){
        return 2;
        }
};

int main()
{
    int a = 1;                                    // create an integer
    int* a_ptr = &a;                              // create a poiter to that integer
    
    std::cout << a << "\n";                       // print value of the integer
    std::cout << a_ptr << "\n";                   // print memory address the a_ptr points to
    std::cout << *a_ptr << "\n\n";                  // print the value of the integer stored at the pointers memory address
  
    entity e = entity();                          // create an instance of the example class
    entity* e_ptr = &e;                           // create a pinter to that instance
  
    std::cout << e.foo() << "\n";                 // call the foo function from the instance e of the example class
    std::cout << e_ptr << "\n";                   // print the memory address the e_ptr points to
    std::cout << (*e_ptr).foo() << "\n";          // call foo from the instance the pointer e_ptr points to
    std::cout << e_ptr->foo() << "\n";            // call foo from the instance the pointer e_ptr points to with the arrow operator
}
