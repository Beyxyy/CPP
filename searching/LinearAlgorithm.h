#ifndef LINEARALGORITHM_H
#define LINEARALGORITHM_H
#include "SearchingAlgorithm.h"
#include <vector>
using namespace std;


class LinearAlgorithm : public SearchingAlgorithm {

    public :
    int search(const vector<int>&, int) override;

};

#endif