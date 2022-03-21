/*
    Created by gerstudent
    Task: Given five real numbers: x, y, xc, yc, r. Check whether
    the point (x, y) belongs to a circle with the center (xc, yc)
    and radius r. If the point belongs to a circle, print the word
    YES, otherwise print the word NO.

    Sample Input 1:
    0.5
    0.5
    0
    0
    1
    Sample Output 1:
    YES

    Sample Input 2:
    0.5
    0.5
    1
    1
    0.1
    Sample Output 2:
    NO
*/

#include <iostream>
#include "cmath"
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
    return pow(x - xc, 2) + pow(y - yc, 2) <= pow(r, 2);
}

int main() {
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    cout << ((IsPointInCircle(x, y, xc, yc, r)) ? "YES" : "NO");
    return 0;
}