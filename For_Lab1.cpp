/************************************
 * Автор: Станковский П.А.          *
 * Дата: 27.09.2023                 *
 * Название: Shitcode Lab1          *
 * https://onlinegdb.com/bo_MVILD5  *
 ************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float g = 9.81;
    double Mass = 25.52, angle = 0.698132, k = 0.15, mass = 5.7;
    double a1, a2, whatisthAt;
    whatisthAt = Mass + mass*(pow(sin(angle), 2) - k*(sin(2*angle)/2));
    a1 = (g * Mass / whatisthAt) * (cos(angle)*(sin(angle) - k*cos(angle)));
    a2 = (g * Mass / whatisthAt) * (sin(angle)*(cos(angle) + k*sin(angle)));
    cout.fixed;
    cout.precision(7);
    cout << "a1 = " << a1 << ";  a2 = " << a2 << endl;
    return 0;
}
