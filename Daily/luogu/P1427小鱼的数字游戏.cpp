#include <bits/stdc++.h>
using namespace std;
int main () {
    int x;
    vector<int> v;
    while (cin >> x&&x!=0) {
        v.push_back(x);
    }
    for (int i=v.size()-1; i>=0; i--) {
        cout << v[i]<<" ";
    }
    return 0;
}