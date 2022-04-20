/*
 * For a given number 1≤n≤10^9, find the maximum number k for which n can be represented as the sum of k different
 * natural terms. Print the number k in the first line, and k summands in the second.
 * Sample Input 1:
 * 4
 * Sample Output 1:
 * 2
 * 1 3
 *
 * Sample Input 2:
 * 6
 * Sample Output 2:
 * 3
 * 1 2 3
 */

#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<ld,ld>;

#define pb push_back
#define mp make_pair

int main() {
    int n, cur = 1;
    cin >> n;
    vector<int> ans;
    while(n - cur > cur){
        n -= cur;
        ans.pb(cur);
        cur += 1;
    }
    ans.pb(n);
    cout << ans.size() << endl;
    for (int k = 0; k < ans.size(); k++){
        cout << ans[k] << " ";
    }
    return 0;
}