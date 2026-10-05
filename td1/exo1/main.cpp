#include <iostream>
#include <string>
#include "hello.h"
#include "my_class.h"

int main() {
    std::cout << "Hello World!" << std::endl;
    std::string text = "Hello World!";
    helloworld(text);
    my_class a(text);
    a.print_my_element();
    return 0;
}