#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    stack <int> st;
    while(q--) {
        int n;
        cin>>n;
        for (int i=0; i<n; i++) {
            int x;
            cin>>x;
            st.push(x);
        }
        for (int j=0; j<n; j++) {
            int y;
            cin>>y;
            if (st.top()==y) {
                st.pop();
            }
        }
        if (st.empty()) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO\n";
        }
    }
    return 0;
}