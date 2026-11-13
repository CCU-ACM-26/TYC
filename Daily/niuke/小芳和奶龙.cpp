#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s1,s2;
    cin>>s1>>s2;
    int f=0,nai=0;
    for (int i = 0; i < n; i++) {
        if (s1[i]=='0') {
            f++;
        }
        else {
            nai++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (s2[i]=='0') {
            f++;
        }
        else {
            nai++;
        }
    }
    cout<<f<<" "<<nai<<endl;
}