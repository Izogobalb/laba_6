#include <iostream>
#include <cassert>

using namespace std;

int Euclid_algorithm(int a, int b) { // a > b
    if (b == 0) {
        return a;
    } else if (b > a) {
        return Euclid_algorithm(b, a);
    } else {
        return Euclid_algorithm(b, a % b);
    }
}

void Unit_tests() {
    cout << endl;
    assert(Euclid_algorithm(1, 0) == 1);
    assert(Euclid_algorithm(69, 13) == 1);
    assert(Euclid_algorithm(14, 7) == 7);
    assert(Euclid_algorithm(7975, 2585) == 55);
    assert(Euclid_algorithm(1877, 1032) == 1);
    assert(Euclid_algorithm(533, 533) == 533);
    assert(Euclid_algorithm(30, 239) == 1);
    cout << "The algorithm is working properly" << endl;
}

int main() {
    Unit_tests();
    return 0;
}
