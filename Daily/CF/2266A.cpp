#include <bits/stdc++.h>
using namespace std;
void solve() {
        int n;
        cin>>n;
        int a,b,c;
        cin>>a>>b>>c;
        int max_strong = min(a, min(b, c));
        cout<<n-max_strong<<endl;
        }
int main() {
        int t;
        cin>>t;
        while(t--) solve();
        return 0;
}