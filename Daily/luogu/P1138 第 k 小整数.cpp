#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    set<int> s;
    while (n--) {
        int x;
        cin>>x;
        s.insert(x);
    }
    if (s.size()<k) {
        cout<<"NO RESULT\n";
    }
    int count=0;
    for (int x:s) {
        count++;
        if (count==k) {
            cout<<x;
            break;
        }
    }
    return 0;
}