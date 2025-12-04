//https://codeforces.com/problemset/problem/1367/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string b;
        cin>>b;

        string a="";
        a=a+b[0]; 
       
        for(int i=1;i<b.size();i=i+2)
        {
            a=a+b[i];
        }

        cout<<a<<endl;
    }
    return 0;
}