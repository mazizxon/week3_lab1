#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    float t = (3.0f * (x*x + 3)) / (y/4.0f + 3);
    printf("t = %.5f\n", t);

    return 0;
}