//https://codeforces.com/problemset/problem/282/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int t;cin>>t;
    while(t--)
    {
       string s;cin>>s;
       if(s=="X++")
       {
            x++;
          
       }
       else if(s=="++X")
       {
             ++x;
           
       }
        else if(s=="--X")
       {
             --x;
           
       }
        else if(s=="X--")
       {
             x--;
            
       }
      
       
    }
     cout<<x<<endl;
    return 0;
    
}