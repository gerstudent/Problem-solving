/*
    Created by gerstudent
    Task: Given a natural number n > 1. Output its smallest divisor
    other than 1. Formalize the solution in the form of the MinDivisor(n) function.
    The number of operations in the program should be proportional to the root of n.
    Indication. If the number n has no divisor less than n , then the number n is
    prime and the answer will be the number n itself.

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

int MinDivisor(int n){
    int div = 2;
    for (int isqrt = sqrt(n); div < isqrt && n % div != 0; div++){

    }

    if (n % div != 0){
        div = n;
    }

    return div;
}

int main() {
    int n;
    cin >> n;
    cout << MinDivisor(n) << '\n';
    return 0;
}