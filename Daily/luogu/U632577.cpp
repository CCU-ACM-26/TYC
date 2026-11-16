#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        ans+=sum*x;
        sum+=x;
    }
    cout<<ans<<endl;
    return 0;
}