//https://codeforces.com/problemset/problem/2110/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int n=s.size();

        bool check=true;

        
        for (int i=0;i<n/2;i++)
        {
            if(s[i]!='(')
            {
                check=false;
            } 
        }

        for(int i= n/2;i<n;i++)
        {
            if(s[i]!=')')
            {
                check=false;
            } 
        }


        if (check) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;
    }

    return 0;
}
