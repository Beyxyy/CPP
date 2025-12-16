#include "header/gaussianGenerator.h"
#include <vector>
#include <cmath>
#include <cstdlib>

GaussianGenerator::GaussianGenerator(int _seed, double _moyenne, double _et) : moyenne(_moyenne), et(_et), TimeSeriesGenerator(_seed){}

vector<double> GaussianGenerator::generateTimesSeries(int taille){
    vector<double> result(taille);

    srand(seed);
    double toto, titi;
    for (int i = 0; i < taille; i++) {
        toto= (rand() + 1.0) / (RAND_MAX + 1.0);
        titi = (rand() + 1.0) / (RAND_MAX + 1.0);

        double z = sqrt(log(toto))*-2.0 * cos(2*M_PI*titi);
        result[i] = this->moyenne + this->et * z;
    }

    return result;
};
