//https://cses.fi/problemset/task/1068


#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;

    while(true)
    {
        

        if(x==1) break;

        if(x%2==0)
        {
            x/=2;
        }
        else
        {
            x=x*3 +1;
        }

        cout<<x<<" ";
    }
    return 0;
}