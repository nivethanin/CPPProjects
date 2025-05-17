#include <iostream>
#include <cmath>
#include <ostream>
#define _USE_MATH_DEFINES

using namespace std;

int main() {
    cout << "Type in a radius" << endl;
    double radius = 0;
    cin >> radius;
    double area = pow(radius,2) * M_PI;
    cout << area << endl;
    return 0;
}