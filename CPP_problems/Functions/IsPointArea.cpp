/*
    Created by gerstudent
    Task: Check if the point belongs to this shaded area.
    The solution should contain the IsPointInArea(x, y) function,
    which returns True if the point belongs to the area and False if it does not.
    The IsPointInArea function must not contain an if statement.

    Sample Input 1:
    -4
    -4
    Sample Output 1:
    NO

    Sample Input 2:
    -4
    -3
    Sample Output 2:
    NO
*/

#include <iostream>
#include "cmath"
using namespace std;

bool IsPointInCircle(double x, double y) {
    const double xc = -1;
    const double yc = 1;
    const double r = 2;

    return pow(x - xc, 2) + pow(y - yc, 2) <= pow(r, 2);
}

bool IsPointInsideCircle(double x, double y) {
    const double xc = -1;
    const double yc = 1;
    const double r = 2;

    return pow(x - xc, 2) + pow(y - yc, 2) < pow(r, 2);
}

double IsPointInArea(double x, double y){
    bool r_line_r = y <= 2*x + 2;
    bool r_line_l = y >= 2*x + 2;
    bool l_line_r = y >= -x;
    bool l_line_l = y <= -x;

    bool in_circle = IsPointInCircle(x, y) && l_line_r && r_line_l;
    bool out_line_cir = !IsPointInsideCircle(x, y) && l_line_l && r_line_r;
    return out_line_cir || in_circle;
}

int main() {
    double x, y;
    cin >> x >> y;
    cout << ((IsPointInArea(x, y)) ? "YES" : "NO");
    return 0;
}