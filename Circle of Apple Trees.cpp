//https://codeforces.com/problemset/problem/2153/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>arr(n);
        int count=1;
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        for(int j=0;j<n-1;j++)
        {
           if(arr[j]<arr[j+1])
           {
              count++;
           }
        }
        cout<<count<<endl;
    }
    return 0;
}