#include <bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    queue<int> q;
    bool flag[1005]={false};
    int ans=0;
    for(int i=0;i<n;i++) {
        int w;
        cin>>w;
        if(flag[w]==false) {
            ans++;
            if (q.size()==m) {
                int od=q.front();q.pop();
                flag[od]=false;
            }
            q.push(w);
            flag[w]=true;
        }
    }
    cout<<ans<<endl;
    return 0;
}