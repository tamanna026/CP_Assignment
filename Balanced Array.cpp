//https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
     {
        int n;
        cin>>n;

        if((n/2)%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        vector<int>v;

        int half=n/2;

    
        for(int i=1;i<=half;i++)
        {
            v.push_back(i*2);
        }

    
        for(int i=1;i<half;i++)
        {
            v.push_back(i*2-1);
        }

        
        int first_sum=0;
        int second_sum=0;

        for(int i=0;i<half;i++)
        {
            first_sum=first_sum+v[i];

        }

        for(int i=half;i<n-1;i++)
         {
            second_sum=second_sum+v[i];
         }


          v.push_back(first_sum-second_sum);

        
          for(int x:v)
          {
             cout<<x<<" ";
          } 

        cout<<"\n";
    }

    return 0;
}
