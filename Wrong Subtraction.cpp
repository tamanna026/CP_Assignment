//https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int temp;
    deque<int>arr;
    while(n!=0)
    {
       temp=n%10;
       arr.push_front(temp);
       n=n/10;

    }
    for(int i=0;i<k;i++)
    {
           if(arr.back()!=0)
           {
             arr.back()=arr.back()-1;
           }
           else{
            arr.pop_back();
           }
    }
    for(int arr1:arr)
    {
       cout<<arr1;
    }

}