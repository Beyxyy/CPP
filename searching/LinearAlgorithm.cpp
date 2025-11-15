#include "LinearAlgorithm.h"
#include <vector>
#include <iostream>
using namespace std;

int LinearAlgorithm::search(const vector<int>& vector, int target){
    int results = 0;

    for (int  e : vector) {
        numberComparaisons++;
        if(e==target) return results;
        else results++; 
    }

    return -1;
}