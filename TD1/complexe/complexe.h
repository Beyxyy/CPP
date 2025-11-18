#ifndef COMPLEXE_H
#define COMPLEXE_H

class Complexe{
    public :
        Complexe();
        Complexe(double const a, double const b);
        Complexe(const double a);
        Complexe(const Complexe& c);

        void setReal(const double r);
        void setIm(const double r);

        double  getReal() const; 
        double  getIm() const; 

        Complexe operator + ( const Complexe& c2) const ;
        Complexe operator / (const Complexe& c2) const ;
        Complexe operator - ( const Complexe& c2) const ;
        bool operator < (const Complexe& c2) const ;
        bool operator > (const Complexe& c2) const ;

        double Module() const;

        Complexe operator * (const Complexe& c2) const;

        private : 
            double real;
            double im;



};

#endif