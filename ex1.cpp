#include "ex1.h"

void calculateSums(const double* arr, int size, double& sumEvenIndices, double& sumIndicesDivisibleByThree) {
    sumEvenIndices = 0;
    sumIndicesDivisibleByThree = 0;
    
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            sumEvenIndices += arr[i];
        }
        if (i % 3 == 0) {
            sumIndicesDivisibleByThree += arr[i];
        }
    }
}
