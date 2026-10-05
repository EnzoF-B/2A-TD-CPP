#include <iostream>
#include <string>
#ifndef MY_CLASS_H
#define MY_CLASS_H

class my_class{
    private:
    std::string a;

    public:
    void print_my_element();
    my_class(std::string _a);
};

#endif