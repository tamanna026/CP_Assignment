//https://codeforces.com/problemset/problem/2084/A



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

        if(n==2 || n==4)
        {
            cout<<-1<<endl;
        }
        else if(n==3)
        {
            cout<<"3 2 1"<<endl;
        }

        else if(n==5)
        {
            cout<<"1 5 2 3 4"<<endl;
        }
        else
        {
            vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                v[i]=i+1;

            } 

            
            swap(v[1],v[2]);

            if(n>=5) 
            {
                swap(v[2],v[4]);
            }

            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }

            cout <<endl;
        }
    }


    return 0;
}
