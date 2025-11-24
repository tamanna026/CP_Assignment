//   https://codeforces.com/problemset/problem/381/A 

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++)
    {

        cin>>v[i];
    }

   

    int sereja=0;int dima=0;
    int l=0;int r=n-1;
    int t=0;

    
    while(l<=r)
    {
        int pick=0;
        if(v[l]>v[r])
        {
             pick=v[l];
            l++;
        }
        else
        {
             pick=v[r];
            r--;
        }

        if(t%2==0)
        {
            sereja+=pick;
        }
        else{
            dima+=pick;
        }
        t++;

    }

     cout<<sereja<<" "<<dima<<endl;

    return 0;
}
