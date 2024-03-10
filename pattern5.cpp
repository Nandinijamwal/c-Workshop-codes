#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,r=1;
cin>>n;
while(r<=n)
{
    int c=n-r;
    while(c>=r)
    {
        cout<<"\n";
        c++;
    }
    cout<<"* ";
    r++;
}
    return 0;
}
