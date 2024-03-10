#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,r=1;
cin>>n;
while(r<=n)
{
    int c=n-r;
    while(c>=0)
    {
        cout<<"\n";
        c--;
    }
    int st2=1;
    while (st2<=r)
    {
        cout<<st2;
        st2++;
    }
    r++;
}
    return 0;
}
