//https://codeforces.com/problemset/problem/2146/A


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

        vector<int>v(n);

        for(int i=0;i<n;i++)
         {
            cin>>v[i];
         }


        map<int,int>freq;

        for(int x:v)
        {
            freq[x]++;
        } 

        vector<int>f;

        for(auto &p:freq)
        {
            f.push_back(p.second);
        } 

        sort(f.begin(),f.end());

        int ans=0;
       

        for(int x=1;x<=f.back();x++)
        {
            int count=0;
            
            for(int c:f)
            {
                if(c>=x) count++;
            }

            ans=max(ans,count* x);
        }


        cout<<ans<<endl;
    }

    return 0;
}
