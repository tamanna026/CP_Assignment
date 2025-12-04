//https://codeforces.com/problemset/problem/339/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            v.push_back(s[i]);
        }

    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1;i<v.size();i++)
    {
       cout<<"+"<<v[i];
    }

    return 0;
}
