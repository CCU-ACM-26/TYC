#include <bits/stdc++.h>
using namespace std;
long long gc(long long a,long long b){
    while(b!=0){
        long long temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    long long a,b;
    cin>>a>>b;
    long long g=gc(a,b);
    long long l=a*b/g;
    cout<<g<<" "<<l;
    return 0;
}