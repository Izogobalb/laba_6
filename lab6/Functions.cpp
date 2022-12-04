#include "Euclid.h"

cin >> *(a) >> *(b);

int Euclid_algorithm(int a, int b) { // a > b
    if (b == 0) {
        return a;
    } else if (b > a) {
        return Euclid_algorithm(b, a);
    } else {
        return Euclid_algorithm(b, a % b);
    }
}

void PrintAnswer(int a, int b) {
    Euclid_algorithm(a, b);
}