/*
    Created by gerstudent
    Task: Two real numbers x and y are given. Check whether
    the point with coordinates (x, y) belongs to the shaded
    square (including its border). If the point belongs to
    a square, print the word YES, otherwise print the word NO.
    In the figure, the grid is drawn in step 1.
*/

#include <iostream>
using namespace std;

bool IsPointSquare(double x, double y) {
    bool x_sq = (x >= -1) && (x <= 1);
    bool y_sq = (y >= -1) && (y <= 1);
    return x_sq && y_sq;
}

int main() {
    double x, y;
    cin >> x >> y;
    if (IsPointSquare(x, y)) cout << "YES";
    else cout << "NO";
    return 0;
}