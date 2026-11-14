#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    stack<int> s;
    stack<int> max_s;
    while (n--) {
        int x;
        cin>>x;
        if (x==0) {
            int y;
            cin>>y;
            s.push(y);
        if (max_s.empty()||y>max_s.top()) {
            max_s.push(y);
        }
            else {
                max_s.push(max_s.top());
            }
        }
        if (x==1) {
            if (!s.empty()) {
                s.pop();
                max_s.pop();
            }
        }
        if (x==2) {
            if (s.empty()) {
                cout<<0<<endl;
            }
            else {
                cout<<max_s.top()<<endl;
            }
        }
    }
    return 0;
}