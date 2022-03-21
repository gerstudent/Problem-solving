/*
    Created by gerstudent
    Task: Given a real positive number a and an integer n.
    Calculate a^n. Formalize the solution in the form of a
    recursive function power(a, n).
    Sample Input 1:
    2
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

double power(double a, int n){
    double ans = 1;

    if (n < 0) {
        a = 1 / a;
        n = -n;
    }

    while (--n >= 0){
        ans = ans * a;
    }
    return ans;
}

int main() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a,n) << '\n';
    return 0;
}