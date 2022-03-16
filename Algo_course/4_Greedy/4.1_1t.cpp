/*
    Created by gerstudent
*/
#include <vector>
#include <list>
#include <iostream>
using namespace std;

using pii = pair<int,int>;
using vi = vector<int>;

#define pb push_back
#define mp make_pair

bool flag( pii a,  pii b){
    return a.second < b.second;
}

int main(){
    unsigned int line_cnt = 0;
    cin >> line_cnt;
    list<pii> segment;
    for (size_t i = 0; i < line_cnt; ++i) {
        int a = 0, b = 0;
        cin >> a >> b;
        segment.pb(mp(a, b));
    }

    segment.sort([](const pii &a, const pii &b) { return a.second < b.second;});
    vi points;

    while (segment.size() != 0) {
        int p = (*segment.begin()).second;
        points.pb(p);
        while (true) {
            if (segment.size() != 0 && (*segment.begin()).first <= p) segment.pop_front();
            else break;
        }
    }
    size_t points_cnt = points.size();
    cout << points_cnt << '\n';
    for (auto ans : points) cout << ans << " ";
    cout << '\n';
    return 0;
}