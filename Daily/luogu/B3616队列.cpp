#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    queue<int> q;
    while (n--) {
        int x;
        cin>>x;
        if (x==1) {
            int y;
            cin>>y;
            q.push(y);
        }
        if (x==2) {
            if (!q.empty()) {
                q.pop();
            }
            else {
                cout<<"ERR_CANNOT_POP"<<endl;
            }
        }
        if (x==3) {
            if (!q.empty()) {
                cout<<q.front()<<endl;
            }
            else {
                cout<<"ERR_CANNOT_QUERY"<<endl;
            }
        }
        if (x==4) {
            cout<<q.size()<<endl;
        }
    }
    return 0;
}