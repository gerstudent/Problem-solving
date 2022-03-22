/*
    Created by gerstudent
    Task: Implement a fast exponentiation algorithm using a recursive function.

    Sample Input 1:
    2.0
    1
    Sample Output 1:
    2

    Sample Input 2:
    2
    2
    Sample Output 2:
    4
*/

#include <iostream>
#include "cmath"
using namespace std;

double power(double a, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) return power(a*a, n / 2);
    else return a * power(a, n - 1);
}

int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}