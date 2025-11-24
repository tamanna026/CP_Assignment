//   https://codeforces.com/problemset/problem/701/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<pair<int,int>>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());

    int l=0;int r=n-1;
    while ((l<r))
    {
       cout<<arr[l].second<<" "<<arr[r].second<<endl;
       l++;
       r--;

    }
    



    return 0;
}