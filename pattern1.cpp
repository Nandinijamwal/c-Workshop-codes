#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,r=0;
int m;
cin>>n;
cin>>m;
while(r<n)
{
    int c=0;
    while(c<m)
    {
        cout<<"*";
        c++;
    }
    cout<<"\n";
    r++;
}
    return 0;
}
