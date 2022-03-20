/*
    Created by gerstudent
    Task: The numbers n and m are given. Fill in an array of size n × m in a
    staggered order: cells of one color are filled with zeros, and of another
    color are filled with numbers of a natural series from top to bottom, from
    left to right. The number 1 is written in the upper left corner.
*/

#include "iostream"
#include "vector"
#include "iomanip"

using namespace std;

int main(){
    const int size = 100;
    int a[size][size];
    int n, m, cnt = 1;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 1) {
                a[i][j] = 0;
            }

            else if ((i + j) % 2 == 0) {
                a[i][j] = cnt++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) <<  a[i][j];
        }
        cout << endl;
    }

    return 0;
}