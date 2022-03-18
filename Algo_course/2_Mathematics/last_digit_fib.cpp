/*
    * Created by gerstudent
    * Task: Find the last digit number of nth Fibonacci number
    * 1 ≤ n ≤ 10^7
*/

#include <cassert>
#include <iostream>

using namespace std;

class Fibonacci{
public:
    static int get_last_digit(int n) {
        assert(n >= 1);
        int f0 = 1, f1 = 1, temp;
        for (int i = 2; i < n; ++i){
            temp = f1;
            f1 = (f1 + f0) % 10;
            f0 = temp;
        }
        return f1;
    }
};

int main(void) {
    int n;
    cin >> n;
    cout << Fibonacci::get_last_digit(n);
    return 0;
}