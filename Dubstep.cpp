//https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result="";

    int i=0;
    while (i<s.size())
     {

        
        if (i+2<s.size() && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {

            if (!result.empty() && result.back() != ' ')
            {
                result=result+ ' ';
            }

            i=i+3;
        } 
        else
         {
            result=result+s[i];
            i++;
        }
    }

    

    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result;

    return 0;
}