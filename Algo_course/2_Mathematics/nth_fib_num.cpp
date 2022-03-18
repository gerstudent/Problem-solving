/*
    * Created by gerstudent
    * Task: find the nth fibonacci number
    * 1 ≤ n ≤ 40
*/

#include <cassert>
#include <iostream>

using namespace std;

class Fibonacci{
public:
    static int get(int n){
        assert(n >= 0);
        int a = 0, b = 1;

        if (n == 0) return a;

        for (long long i = 0; i < n; i++){
            a = a + b;
            b = a - b;
        }
        return a;
    }
};

int main(void){
    long long n;
    cin >> n;
    cout << Fibonacci::get(n);
    return 0;
}