#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        stack<char> v;
        bool flag=true;
        for (char c:s) {
            if (c=='('||c=='{'||c=='[') {
                v.push(c);
            }
            else {
                if (v.empty()) {
                    flag=false;
                    break;
                }
                char top=v.top();
                if ((c==')'&&top=='(')||(c=='}'&&top=='{')||(c==']'&&top=='[')) {
                    flag=true;
                    v.pop();
                }else {
                    flag=false;
                    break;
                }
            }
        }
        if (!v.empty()) {
            flag=false;
        }
        if (flag) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}