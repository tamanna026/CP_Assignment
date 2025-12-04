//https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std;
int matrix[5][5];
int row,col;
int main()
{
    for(int i=1;i<=5;i++)
    {
       for(int j=1;j<=5;j++)
       {
          cin>>matrix[i][j];
       }
    }
    for(int i=1;i<=5;i++)
    {
       for(int j=1;j<=5;j++)
       {
         if(matrix[i][j]==1)
         {
            row=i;
            col=j;
         }
       }
    }
    int total_move=abs(row-3)+abs(col-3);
    cout<<total_move<<endl;
    
    return 0;
}
