#include <iostream>
#include "ex1.h"

int main() {
    const int size = 16;
    double Z[size] = {1.2, 3.5, 2.4, 4.8, 5.1, 6.3, 7.0, 8.9, 9.4, 10.5, 11.2, 12.3, 13.6, 14.8, 15.1, 16.2};
    double sumEvenIndices, sumIndicesDivisibleByThree;

    calculateSums(Z, size, sumEvenIndices, sumIndicesDivisibleByThree);

    std::cout << "Sum of elements with even indices: " << sumEvenIndices << std::endl;
    std::cout << "Sum of elements with indices divisible by three: " << sumIndicesDivisibleByThree << std::endl;
    return 0;
}