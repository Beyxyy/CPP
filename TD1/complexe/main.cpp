#include "complexe.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv){
    Complexe complexe1(1, 2);
    Complexe complexe2(complexe1);
    Complexe complexe3 = complexe1+complexe2;
    cout << "Addition de nombres complexes :" << endl;
    cout << complexe3.getReal() <<"+i"<< complexe3.getIm() << endl;
    cout << "Soustraction de nombres complexes :" << endl;
    Complexe complexeSous = complexe3 - complexe1;
    cout << complexeSous.getReal() <<"+i"<< complexeSous.getIm() << endl;
    cout << "division de nombres complexes :" << endl;
    Complexe complexe4 = complexe3/complexe1;
    cout << complexe4.getReal() <<"+i"<< complexe4.getIm() << endl;
    cout << "Module d'un nombre complexe :" << endl;
    Complexe complexe5 = complexe4.Module();
    cout << complexe5.getReal() <<"+i"<< complexe5.getIm() << endl;    
    cout << "multiplication de nombres complexes :" << endl;
    Complexe complexe6 = complexe1*complexe2;
    cout << complexe6.getReal() <<"+i"<< complexe6.getIm() << endl;
    cout << "Comparaison de nombres complexes :" << endl;
    if (complexe1 < complexe2){
        cout << "complexe1 est plus petit que complexe2" << endl;
    }
    else{
        cout << "complexe1 est plus grand que complexe2" << endl;
    }





    return 0;
}

