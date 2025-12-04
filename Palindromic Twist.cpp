//https://codeforces.com/problemset/problem/1027/A

#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int n=s.size();

    for(int i=0;i<n/2;i++)
    {
        int diff=(s[i]-s[n-1-i]);

        if(diff%2!=0) return false;
    }

    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n;
        string s;
        cin>>n>>s;

        if (palindrome(s))
        {
           cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
