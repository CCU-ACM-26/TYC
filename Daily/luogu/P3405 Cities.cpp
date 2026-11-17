#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long ans=0;
    map <string,int> zhou;
    while (n--) {
        string c,s;
        cin>>c>>s;
        c=c.substr(0,2);
        if (c!=s) {
            ans+=zhou[c+s];
            zhou[s+c]++;
        }
    }
    cout<<ans<<endl;
    return 0;
}