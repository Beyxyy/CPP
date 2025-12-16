#include "header/KNN.h"
#include <vector>

KNN::KNN(int _k) : k(_k), similarity_measure{_sm}{}

int KNN:getK() const {
    return this->k;
}

float KNN::evalutate(){
    swith(this->similarity_measure$){
        case "dtw" : 
            
            break;

        case "euclidian_distance" : 
            break;
        default : 
            return -1;
    }
    if()

}

int KNN:setK(const int _k){
    this->k = _k;
}

