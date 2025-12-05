//https://codeforces.com/problemset/problem/1873/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
    cin>>t;

    while(t--)
    {
       string s;
       cin>>s;

       if(s[0]=='b' && s[2]=='a')
       {
         cout<<"NO"<<endl;
       }
       else if(s[0]=='c' && s[2]=='b')
       {
         cout<<"NO"<<endl;
       }

       else cout<<"YES"<<endl;
    }

    return 0;
    
}