#include <iostream>
#include <cmath>

using namespace std;

// Prototype fungsi untuk menghitung integral menggunakan trapezoidal rule
double integrate(int k, double a, double b);

// Implementasi fungsi
double integrate(int k, double a, double b) {
    int n = 1000;  // Jumlah subinterval
    double h = (b - a) / n;  // Lebar setiap subinterval
    double result = 0.5 * (pow(a, k) + pow(b, k));  // Nilai pada ujung interval

    // Hitung jumlah trapezoid
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        result += pow(x, k);
    }

    // Hitung hasil akhir
    result *= h;

    return result;
}

int main() {
    // Contoh pemanggilan fungsi
    cout << integrate(3, 2.0, 4.0) << endl;

    return 0;
}

