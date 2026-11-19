#include <bits/stdc++.h>
using namespace std;
struct zo {
    int x;
    int y;
    int z;
};
bool op(zo a, zo b) {
    if (a.z != b.z) {
        return a.z<b.z;
    }
    return false;
}
int main () {
    int n;
    cin>>n;
    double sum=0;
    zo p[50005];
    for (int i=1;i<=n;i++) {
        int x,y,z;
        cin>>x>>y>>z;
        p[i].x=x;
        p[i].y=y;
        p[i].z=z;
        }
    sort(p+1,p+n+1,op);
    for (int i=1;i<n;i++) {
        sum+=sqrt(pow(p[i+1].x-p[i].x,2)+pow(p[i+1].y-p[i].y,2)+pow(p[i+1].z-p[i].z,2));
    }

printf("%.3lf",sum);
    return 0;
}