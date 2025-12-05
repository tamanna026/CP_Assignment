//https://codeforces.com/problemset/problem/2132/B

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        vector<long long>v;

        long long p=10;  

        for(int k=1;k<=18;k++)
        {
            long long d=1+p; 

            if (d>n)
            {
                break;
            }

            if (n%d==0)
            {
                v.push_back(n/d);
            }

            p=p*10;
        }


        if (v.empty())
        {
            cout<<0<<endl;
        }

        else
        {
            cout<<v.size()<<endl;
            for (auto x:v)
            {
               cout<<x<<" ";
            } 
            cout <<endl;
        }
    }

    return 0;
}
