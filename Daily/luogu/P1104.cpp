#include <bits/stdc++.h>
using namespace std;
struct Daily {
    string s;
    int y;
    int m;
    int d;
    int id;
};
bool cmp(Daily a, Daily b) {
    if (a.y!=b.y) {
        return a.y<b.y;
    }
    if (a.m!=b.m) {
        return a.m<b.m;
    }
    if (a.d!=b.d) {
        return a.d<b.d;
    }
    return a.id>b.id;
}
int main() {
    int n;
    cin >> n;
    Daily p[105];
    for (int i = 1; i <=n; i++) {
        string s; cin >> s;
        int y; cin >> y;
        int m; cin >> m;
        int d; cin >> d;
        p[i].s = s;
        p[i].y = y;
        p[i].m = m;
        p[i].d = d;
        p[i].id = i;
    }
    sort(p+1, p + n+1, cmp);
    for (int i = 1; i <=n; i++) {
        cout<<p[i].s<<endl;
    }
    return 0;
}