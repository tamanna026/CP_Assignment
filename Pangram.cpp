//   https://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    char st[n];
    for(int i=0;i<n;i++)
    {
        cin>>st[i];
    }
    set<char>s;

    for(int i=0;i<n;i++)
    {
        s.insert(tolower(st[i]));
    }

    if(s.size()==26)
    {
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}