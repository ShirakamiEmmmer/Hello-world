//
//

#include ".h/泰勒展开sinx.h"
#include <iostream>
#include <iomanip>
#include ".h/printID.h"

using namespace std;
double PI = 3.14159265358979323846264328327950288;

int main() {

    printID();
    double x;
    int step = -1;
    double sinfx;
    double son = 1.0;
    int n = 1;
    int i = 1;
    cout << "Please input a number " << endl;
    cin >> x;
    x = (x * PI) / 180;
    sinfx = x;
    son = x;
    while (son / n >= 0.0001) {

        n *= (2 * i) * (2 * i + 1);
        son *= x * x;
        sinfx += step * son / n;
        step = -step;
        i = i + 1;
    }
    cout << "We get " << setprecision(10) << sinfx << endl;


    return 0;
}