//https://codeforces.com/problemset/problem/2156/A

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

        int max=0;

        while(n>=3)
        {
           int  m1=n/3; 
           int  m2=n/3;        
           int m3=n-m1-m2;
            max=max+m1;
            n=m3;                    
        }

        cout<<max<<endl;
    }

    return 0;
}
