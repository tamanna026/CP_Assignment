//  https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    map<string,int>mp;
    string arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<t;i++)
    {
        
        if(mp.find(arr[i])==mp.end())
        {
            cout<<"OK"<<endl;
            mp[arr[i]]=1; //store
        }
        else{
            cout<<arr[i]<<mp[arr[i]]<<endl;
            mp[arr[i]]++;
        }
    }


    
    return 0;
}