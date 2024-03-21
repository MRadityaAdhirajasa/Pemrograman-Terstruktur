#include <iostream>

using namespace std;

double cube(int a, int b) {
    return a * b;
}

double cube(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << cube(1, 2) << endl;
    cout << cube(1, 2, 4);

    return 0;
}

