#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for (int x=0;x<t;x++) {
        int n;
        cin>>n;
        set<int> st;
        while (n--) {
            int s;
            cin>>s;
            if (st.find(s) == st.end()) {
                cout<<s<<" ";
                st.insert(s);
            }}
        cout<<endl;
    }
    return 0;

}