//  https://codeforces.com/problemset/problem/44/A

#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;cin>>n;
    set<pair<string,string>>s;
    

    for(int i=0;i<n;i++)
    {
        string species,colour;
        cin>>species>>colour;
         s.insert({species,colour});
    }


    cout<<s.size()<<endl;
    

    return 0;
}