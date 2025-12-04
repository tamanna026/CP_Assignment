//https://codeforces.com/problemset/problem/1154/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long>v(4);

    for(int i=0;i<4;i++)
    {
      cin>>v[i];
    } 

    sort(v.begin(), v.end());

    long long sum=v[3];
    long long a=sum-v[2];
    long long b=sum-v[1];
    long long c=sum-v[0];

    cout<<a<<" "<<b<<" "<<c<<endl;
}
