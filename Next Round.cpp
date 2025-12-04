//https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int arr[n];
    int count=0;
    for(int i=1;i<=n;i++)
    {
       cin>>arr[i];
    }
    for(int j=1;j<=n;j++)
    {
       if(arr[j]>=arr[k] && arr[j]>0)
       {
         count++;
       }
    }
    cout<<count<<endl;
    return 0;
}