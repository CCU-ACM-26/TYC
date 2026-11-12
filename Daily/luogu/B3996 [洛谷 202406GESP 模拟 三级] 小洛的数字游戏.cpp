#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int m,q;
    cin>>s>>m>>q;
    if (s==to_string(m)) {
        return 0;
    }
    vector<string> v;
    for (int i=0;i<q;i++) {
        int last=s.back()-'0';
        s.pop_back();

        int sq=(last*last)%10;
        if (sq!=0) {
            s=to_string(sq)+s;
        }
        v.push_back(s);
        if (s==to_string(m)) {
            for (string str:v) {
                cout<<str<<endl;
            }
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}