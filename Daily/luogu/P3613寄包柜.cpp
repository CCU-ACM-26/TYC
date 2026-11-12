#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    vector<map<int,int>> a(n+1);
    for(int i=0;i<q;i++) {
        int op;
        cin>>op;
        if(op==1) {
            int x,y,k;
            cin>>x>>y>>k;
            a[x][y]=k;
        }
        else if(op==2) {
            int x,y;
            cin>>x>>y;
            cout<<a[x][y]<<endl;
        }
    }
    return 0;
}