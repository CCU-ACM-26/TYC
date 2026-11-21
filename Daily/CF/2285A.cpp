#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if (n<=3) {
            cout<<-1<<endl;
        }
        if (n>=4){
            vector <int> v(n+1);
            for (int i=1;i<=n;i++) {
                v[i]=i;
            }
                swap(v[1],v[4]);

        for (int i=1;i<=n;i++) {
            cout<<v[i]<<" ";
        }
    }
            }
    return 0;
}