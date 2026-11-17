#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    map<int,bool> mp;
    for(int i=0;i<k;i++) {
        int a;
        cin>>a;
        mp[a]=true;
    }
    int pos=0;
    int time=0;
    while(pos<n) {
        pos+=m;
        time++;
        if (mp[pos]) {
            m++;
        }
    }
    cout<<time;
    return 0;
}