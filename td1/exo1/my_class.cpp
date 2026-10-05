#include <iostream>
#include <string>
#include "my_class.h" 
      
void my_class::print_my_element() {
    std::cout << a << std::endl;
};

my_class::my_class(std::string _a){
    a = _a;
}
