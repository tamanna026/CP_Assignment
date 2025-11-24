//  https://codeforces.com/problemset/problem/855/As

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;cin>>n;
    string arr[n];
    map<string,int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])==mp.end())
        {
            cout<<"NO"<<endl;
            mp[arr[i]]=1;//insert the string in the map
        }
        else{
            cout<<"YES"<<endl;
        }
    }


    return 0;

}