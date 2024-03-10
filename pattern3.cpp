#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,r=1;
cin>>n;
while(r<=n)
{
    int c=n;
    while(c>=r)
    {
        cout<<c;
        c--;
    }
    cout<<"\n";
    r++;
}
    return 0;
}
