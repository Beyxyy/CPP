#include "JumpAlgorithm.h"
#include <vector>
#include <iostream>
#include <cmath>

int JumpAlgorithm::search(const vector<int>& vector, int target){
    int n = vector.size();
    int step = std::sqrt(n);
    int prev = 0;

    numberComparaisons = 0;

    while (prev < n && vector[std::min(step, n) - 1] < target) {
        numberComparaisons++;
        prev = step;
        step += std::sqrt(n);
        if (prev >= n)
            return -1;
    }

    while (prev < std::min(step, n)) {
        numberComparaisons++;
        if (vector[prev] == target)
            return prev;
        prev++;
    }

    return -1;
}