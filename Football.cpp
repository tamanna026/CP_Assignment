//https://codeforces.com/problemset/problem/96/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin>>x;
    int z=1;
    for(int i=1;i<=x.length();i++)
    {
        if(x[i]==x[i-1])
        {
            z++;
            if(z==7)
            {
                cout<<"YES"<<endl;
            return 0;
            }
        }
    else
    {
        z=1;
    }
    }
    cout<<"NO"<<endl;
    return 0;
 
}