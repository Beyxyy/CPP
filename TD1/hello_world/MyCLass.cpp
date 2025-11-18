#include "MyCLass.h"

MyClass::MyClass(const std::string& _string) : str(_string) {}

MyClass::MyClass() : str() {}

std::string MyClass::print_my_element() const {
    return str;
}