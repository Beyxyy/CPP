#include <iostream>
#include <string>
#include "./MyCLass.h"
using namespace std;

int main(int argc, char **argv){
    if(argc < 2){
        cout << "Un argument est nécessaire." << endl;
        return 1;
    }
    string str = argv[1];
    MyClass my_class(str);
    cout << my_class.print_my_element() +"\n" << endl;
}