//https://codeforces.com/problemset/problem/231/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,m=0;
    cin >> n;
    for(int i = 1;i<=n;++i)
    {
        cin >> a >> b >> c;
        if(a+b+c>=2){
            m=m+1;
        }
    }
    cout << m << endl;
    return 0;
 
}