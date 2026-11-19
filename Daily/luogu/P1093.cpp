#include <bits/stdc++.h>
using namespace std;
struct student {
    int id;
    int sum;
    int ch;
};
bool cmp(student a, student b) {
    if (a.sum != b.sum) {
        return a.sum > b.sum;
    }
    if (a.ch != b.ch) {
        return a.ch > b.ch;
    }
    if (a.id != b.id) {
        return a.id < b.id;
    }
};
int main() {
    int n;
    cin>>n;
    student a[305];
    for (int i=1;i<=n;i++) {
        int c,m,e;
        cin>>c>>m>>e;
        a[i].id=i;
        a[i].ch=c;
        a[i].sum=c+m+e;
    }
    sort(a+1,a+n+1,cmp);
    for (int i=1;i<=5;i++) {
        cout<<a[i].id<<" "<<a[i].sum<<endl;
    }
    return 0;
}