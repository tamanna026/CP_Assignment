//https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v;
        int pos=1;

        while(n>0)
        {
            int digit=n%10;
            if (digit!=0)
            {
                v.push_back(digit*pos);
            }
                
            n=n/10;
            pos=pos*10;
        }

        cout<<v.size()<<endl;
        for(int x:v)
        {
            cout << x << " ";
        } 

        cout<<endl;
    }



    return 0;
}
