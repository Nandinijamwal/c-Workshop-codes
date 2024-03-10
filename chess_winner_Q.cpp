#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int an=0;
    int de=0;
    string s;
   cin>>s;
    for(int j=0;j<n;j++)
    {
        if(s[j]=='A')
        {
            an=an+1;
        }
        else
        {
            de=de+1;
        }
    }
    if(an>de)
    {
        cout<<"Anton";
    }
    else if(an<de)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
return 0;
}
