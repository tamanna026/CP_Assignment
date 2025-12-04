//https://codeforces.com/problemset/problem/1003/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    //input
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    map<int ,int>freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

     int most=0;

     for(int i=0;i<n;i++)
     {
        if(freq[arr[i]]>most)
        {
            most=freq[arr[i]];
        }
     }

     cout<<most<<endl;
    return 0;

}
