//https://codeforces.com/problemset/problem/1537/A

#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int t;
    cin>>t;

    while(t--)
     {
        int n;
        cin>>n;

        vector<int> v(n);
        long long sum=0;

        for (int i=0;i<n;i++)
         {
            cin>>v[i];
            sum=sum+v[i];
        }

        if(sum==n)
         {
            cout<<0<<endl;
         }
        else if(sum<n)
         {
            cout<<1<<endl;
         }
        else
         {
            cout<<sum-n<<endl;
         }
    }
}
