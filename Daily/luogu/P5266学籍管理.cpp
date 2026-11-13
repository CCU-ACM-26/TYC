#include<bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    map<string,int> m;
    while(q--) {
        int op;
        cin>>op;
        if(op==1) {
            string name;
            int sc;
            cin>>name>>sc;
            m[name]=sc;
            cout<<"OK\n";
        }
        if(op==2) {
            string name;
            cin>>name;
            if(m.find(name) != m.end()) {
                cout<<m[name]<<endl;
            }
            else {
                cout<<"Not Found\n";
            }
        }
        if(op==3) {
            string name;
            cin>>name;
            if(m.find(name) != m.end()) {
                m.erase(name);
                cout<<"Deleted successfully\n";
            }
            else {
                cout<<"Not Found\n";
            }
        }
        if(op==4) {
            cout<<m.size()<<endl;
        }
    }
    return 0;
}