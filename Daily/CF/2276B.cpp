#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int ans = 1;
    bool ck=false;
    bool ch=false;
    for(int i=1;i<s.size()-1;i++) {
        if (s[i]==s[i-1]&&s[i]==s[i+1]) {
            ck=true;
        }
        if (s[i]!=s[i-1]&&s[i]!=s[i+1]) {
            ch=true;
        }
    }
    if (ck) {ans++;}
    if (ch) {ans++;}
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}