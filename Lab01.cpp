/************************************
 * Автор: Станковский П.А.          *
 * Дата: 27.09.2023                 *
 * Название: Shitcode v0.1          *
 * https://onlinegdb.com/AM92umnK5o *
 ************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float g = 9.81;
    double m = 75, k = 8, t = 0, v;
    while (t < 6) {
        v = sqrt(g*m/k) * tanh(t*sqrt(g*k/m));
        cout.fixed;
        cout.precision(4);
        cout << "t = " << t << "  v = " << v << endl;
        if (t < 1) {
            t += 0.25;
        } else {
            t += 1;
        }
    }
    return 0;
}
