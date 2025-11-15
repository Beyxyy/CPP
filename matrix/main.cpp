#include "MatrixNumerical.h"

int main() {

    MatrixNumerical m(3,3,0);

    m.addElement(0,0,2);
    m.addElement(0,1,1);
    m.addElement(0,2,3);
    m.addElement(1,0,1);
    m.addElement(1,1,0);
    m.addElement(1,2,4);
    m.addElement(2,0,3);
    m.addElement(2,1,2);
    m.addElement(2,2,1);

    std::cout << "m =" << std::endl;
    m.display();
    std::cout << "det(A) = " << m.getDeterminant() << std::endl;

    std::cout << "Inverse :" << std::endl;
    m.getInverse().display();

    std::cout << "addition de A+A" <<std::endl;
    MatrixNumerical m2 = m+ m;
    m2.display();
    std::cout << "soustration de A-A" <<std::endl;
    MatrixNumerical m3 = m- m;
    m3.display();
    std::cout << "division de A-A" <<std::endl;
    MatrixNumerical m4 = m / m;
    m4.display();


    std::cout << "matrice identité" <<std::endl;
    MatrixBase<short>::getIdentity(5).display();
}
