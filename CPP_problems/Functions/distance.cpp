/*
    Created by gerstudent
    Task:Given four real numbers: x1, y1, x2, y2.
    Write a distance function (x1, y1, x2, y2) that calculates
    the distance between the point (x1. y1) and (x2, y2). Count
    four real numbers and output the result of this function.
*/

#include <iostream>
#include "cmath"
using namespace std;

double distance(double a, double b, double c, double d){
    return sqrt(pow(c - a, 2) + pow(d - b, 2));
}

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << distance(a, b, c, d);
    return 0;
}