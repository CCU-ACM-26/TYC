#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,c;
    cin>>n>>c;
    vector<long long> v(n);
    unordered_map<long long,int> mp;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        mp[v[i]]++;
    }
    long long ans=0;
    for(int i=0;i<n;i++) {
        long long b=v[i];
        long long ta=b+c;
        if(mp.find(ta)!=mp.end()) {
            ans+=mp[ta];
        }
    }
    cout<<ans<<endl;
    return 0;
    }