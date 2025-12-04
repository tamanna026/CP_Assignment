//https://codeforces.com/problemset/problem/1744/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin>>n;
        cin>>c;

        string s;
        cin>>s;

        
        string st=s+s;

        int ans=0;
        for (int i=0;i<n;i++) {
            if (s[i]==c)
             {
                int w=0;

                for (int j=i;j<i+n;j++)
                 {
                    if (st[j]=='g')
                    {
                         break;
                    }
                    w++;
                }
                ans=max(ans,w);
            }
        }

        cout<<ans<<endl;
    }



    return 0;
}