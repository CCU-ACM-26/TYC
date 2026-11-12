#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long a=0;
    long long b=0;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        a+=b*x;
        b+=x;
    }
    cout<<a;
    return 0;
}