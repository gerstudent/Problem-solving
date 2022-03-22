/*
    Created by gerstudent
    Task: Given a natural number n > 1. Check if it is prime.
    The program should output the word YES if the number is simple
    and NO if the number is composite. Formalize the solution in the
    form of the isPrime(n) function, which returns True for prime
    numbers and False for composite numbers.

    Sample Input 1:
    2
    Sample Output 1:
    YES

    Sample Input 2:
    4
    Sample Output 2:
    NO

*/

#include <iostream>
#include "cmath"
using namespace std;

int MinDivisor(int n){
    int div = 2;
    for (int isqrt = sqrt(n); div < isqrt && n % div != 0; div++){}
    if (n % div != 0) div = n;

    return div;
}

int main() {
    int n;
    cin >> n;
    cout << (MinDivisor(n) == n ? "YES" : "NO");
    return 0;
}