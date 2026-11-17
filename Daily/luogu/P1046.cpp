#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v(10);
    for (int i=0;i<10;i++) {
        cin>>v[i];
    }
    int a;
    cin>>a;
    a+=30;
    int ans=0;
    for (int j:v){
        if (j<=a) {
        ans++;
        }
    }
    cout<<ans<<endl;
    return 0;

}