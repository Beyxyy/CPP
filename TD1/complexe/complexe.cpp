#include "complexe.h"
#include <math.h>

Complexe::Complexe() : real(0.0), im(0.0){};

Complexe::Complexe(double const _a, double const _b) : real(_a), im(_b){};

Complexe::Complexe(double const _a) : real(_a), im(_a){};

Complexe::Complexe(const Complexe& c) : real(c.real), im(c.im){};

Complexe Complexe::operator +(const Complexe& c2) const {
    Complexe result(this->real+c2.real, this->im+c2.im);
    return result;
};

Complexe Complexe::operator -(const Complexe& c2) const {
    Complexe result(this->real-c2.real, this->im-c2.im);
    return result;
};

bool Complexe::operator<(const Complexe& c2) const {
    return this->Module() < c2.Module();
}

bool Complexe::operator>(const Complexe& c2) const {
    return this->Module() > c2.Module();
}

Complexe Complexe::operator /(const Complexe& c2) const {
    double denom = c2.real * c2.real + c2.im * c2.im;
    double realPart = (this->real * c2.real + this->im * c2.im) / denom;
    double imPart = (this->im * c2.real - this->real * c2.im) / denom;
    Complexe result(realPart, imPart);
    return result; 
}

Complexe Complexe::operator * (const Complexe& c2) const {
    return Complexe(this->real * c2.real - this->im * c2.im, this->real * c2.im + this->im * c2.real);
}

double Complexe::Module() const {
    return sqrt(this->real * this->real + this->im * this->im);
}



double  Complexe::getIm() const {
    return this->im;
}
double  Complexe::getReal() const {
    return this->real;
}