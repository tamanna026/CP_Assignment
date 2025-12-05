//https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> programmers;
    vector<int> math;
    vector<int>v;

    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(t==1) 
        {
            programmers.push_back(i);
        }
        else if (t==2) 
        {
            math.push_back(i);
        }

        else 
        {
            v.push_back(i);
        }
    }


    int teams = min({(int)programmers.size(), (int)math.size(), (int)v.size()});

    cout<<teams<<endl;

    for (int i=0;i<teams;i++)
    {
        cout<<programmers[i]<<" "<<math[i]<<" "<< v[i]<<endl;
    }

    return 0;
}
