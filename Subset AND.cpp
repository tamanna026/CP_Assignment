#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;

    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(auto &x:v)
        {
            cin>>x;
        }

       bool say=false;
        
        for(int i=0;i<n;i++)
        {
            if(v[i]<k)
            {
                say=true;
                break;
            }

    }
  
    long long ans=v[0];
    for(int i=1;i<n;i++)
    {
        ans=ans&v[i];
       
    }

 if(ans<k)
        {
            say=true;
        }


    if(say)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}

    return 0;
}