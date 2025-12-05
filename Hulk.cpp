//https://codeforces.com/problemset/problem/705/A

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a="I hate";
    string b="I hate ";
    string c="I love ";

    if(n==1)
    {
        cout<<"I hate it"<<endl;
    }

    else
    {
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                a=a+"that "+c;
            }
            else
            {
                a=a+"that "+b;
            }
        }
        cout<<a+"it"<<endl;
    }
 
    return 0;
}