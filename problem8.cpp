#include <iostream>
using namespace std;

int main() {
    double diameter;
    cin >> diameter;

    double radius = diameter / 2;
    double area = 4 * 3.14159 * radius * radius;

    cout << "Area: " << area << endl;

    return 0;
}