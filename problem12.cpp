#include <iostream>
using namespace std;

int main() {
    int totalStudents = 241;
    int groups = 11;
    int baseStudents = totalStudents / groups;
    int remainder = totalStudents % groups;
    int firstGroup = baseStudents;
    int lastGroup = remainder;

    cout << "In first group: " << firstGroup << endl;
    cout << "In last group: " << lastGroup << endl;

    return 0;
}