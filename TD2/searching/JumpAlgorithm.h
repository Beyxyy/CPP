#ifndef JUMPALGORITHM_H
#define JUMPALGORITHM_H
#include "SearchingAlgorithm.h"
#include <vector>
using namespace std;


class JumpAlgorithm : public SearchingAlgorithm {

    public :
    int search(const vector<int>&, int) override;

};

#endif