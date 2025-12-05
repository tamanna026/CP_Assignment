//https://codeforces.com/problemset/problem/41/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;

    reverse(y.begin(),y.end());
    if(x==y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}