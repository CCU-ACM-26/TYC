#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    while(n--) {
        string x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<string>());
    for (string i:a) {
        cout<<i;
    }
    return 0;
}