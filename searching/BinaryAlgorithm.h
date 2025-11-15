#ifndef BINARYALGORITHM_H
#define BINARYALGORITHM_H
#include "SearchingAlgorithm.h"
#include <vector>
using namespace std;


class BinaryAlgorithm : public SearchingAlgorithm {


    public :
    int search(const vector<int>&, int) override;

};

#endif