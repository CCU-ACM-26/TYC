#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector <int> v(n+1);
    for (int i=1;i<=n;i++) {
        cin>>v[i];
    }
    for (int i=0;i<m;i++) {
        int q;
        cin>>q;
    cout<<v[q]<<endl;
    }
    return 0;
}