//https://codeforces.com/problemset/problem/2164/A

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
        
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        } 

        long long x;
        cin>>x;

        long long a= *min_element(v.begin(), v.end());
        long long b= *max_element(v.begin(), v.end());

        if (a<=x && x<=b)  cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }
    
    return 0;
}
