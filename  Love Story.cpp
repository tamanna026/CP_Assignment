//https://codeforces.com/problemset/problem/1829/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string target="codeforces";

    while(t--)
    {
        string s;
        cin>>s;
        int diff=0;
        
        for (int i=0;i<s.length();i++)
        {
            if(s[i]!=target[i])
            {
                diff++;
            }
        }
        
        cout<<diff<<endl;
    }

    return 0;
}