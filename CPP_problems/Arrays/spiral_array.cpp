/*
    Created by gerstudent
    Task: in accordance with the given numbers n and m, fill
    a 2-dimensional array with numbers from 1 to n*m in a spiral
    starting from the upper-left corner and twisted clockwise
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n, m, cnt = 0, i = 0, j = -1;;
    cin >> n >> m;

    while (cnt < n * m){
        while (j < m - 1 && !arr[i][j + 1]){
            arr[i][++j] = ++cnt;
        }

        while (i < n - 1 && !arr[i + 1][j]){
            arr[++i][j] = ++cnt;
        }

        while (j > 0 && !arr[i][j - 1]){
            arr[i][--j] = cnt++;
        }

        while (i > 0 && !arr[i - 1][j]){
            arr[--i][j] = cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}