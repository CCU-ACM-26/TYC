#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<0) {
        cout<<"-";
        n=-n;
    }
    int a=0;
    while (n>0) {
        a=a*10+n%10;
        n=n/10;
    }
    cout<<a;
    return 0;
}