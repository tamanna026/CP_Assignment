//   https://codeforces.com/problemset/problem/1676/B

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;

    while(t--)
    {
       int n;cin>>n;
       vector<int>v(n);

       for(int i=0;i<n;i++)
       {

          cin>>v[i];
       }

     sort(v.begin(),v.end());

     int sum=0;
     
     for(int j=1;j<n;j++)
     {

         sum=sum+(v[j]-v[0]);}
         
     

     cout<<sum<<endl;



    }

    return 0;
}