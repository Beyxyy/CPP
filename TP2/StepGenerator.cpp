#include "header/StepGenerator.h"
#include <vector>
#include <random>

StepGenerator::StepGenerator(int _seed) : TimeSeriesGenerator(_seed){}

vector<double> StepGenerator::generateTimesSeries(int taille){
    vector<double> result(taille);
    srand(seed); 
    double intermediaire = 0.0;
    for (int i = 0; i < taille; i++) {
        // 1 fois sur 2 on change
        if (i > 0 && rand()%2== 0) intermediaire = rand() % 101; // pour générer un numéro entre 0 et 100
        result[i] = intermediaire;
    }
    return result;
};


