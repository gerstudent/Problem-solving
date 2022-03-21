/*
    Created by gerstudent
    Task: Two real numbers x and y are given. Check whether
    the point with coordinates (x, y) belongs to the shaded
    rhomb (including its border). If the point belongs to
    a rhomb, print the word YES, otherwise print the word NO.
    In the figure, the grid is drawn in step 1.
*/

#include "iostream"
#include "cmath"

using namespace std;

bool IsPointRhomb(double x, double y) {
    bool x_sq = (abs(x) + abs(y) <= 1);
    return x_sq;
}

int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointRhomb(x, y)) cout << "YES";
    else cout << "NO";
    return 0;
}