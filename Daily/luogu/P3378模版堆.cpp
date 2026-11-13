#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    priority_queue<int ,vector<int >,greater<int > > pq;
    while(n--) {
        int op,x;
        cin>>op;
        if(op==1) {
            cin>>x;
            pq.push(x);
        }
        else if(op==2) {
            cout<<pq.top()<<endl;
        }
        else {
            pq.pop();
        }
    }
    return 0;
}