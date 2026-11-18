#include <bits/stdc++.h>
using namespace std;
const int n=3005;
int a[n],pre[n];
int main ()
//滑动窗口
{
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) {
        cin>>a[i];
    }
    int win=0;
    for (int i=1;i<=m;i++) {
        win+=a[i];
    }
    int ans=win;
    for (int i=m+1;i<=n;i++) {
        win=win-a[i-m]+a[i];
        ans=min(ans,win);
    }
    cout<<ans<<endl;
    return 0;
}
//前缀和
/*    int n,m;
    cin >>n>> m;
    for (int i = 1; i <=n; i++) {
        cin >> a[i];
        pre[i]=pre[i-1]+a[i];
    }
    long long ans=999999999;
    for (int i = 1; i <=n-m+1; i++) {
        long long sum=pre[i+m-1]-pre[i-1];
        ans=min(ans,sum);
    }
    cout << ans << endl;
    return 0;
}
*/