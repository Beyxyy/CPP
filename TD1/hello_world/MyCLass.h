#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass {
public:
    MyClass(const std::string& str);
    MyClass();
    std::string print_my_element() const;

private:
    std::string str;
};

#endif