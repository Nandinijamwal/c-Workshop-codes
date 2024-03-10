#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=1;j<=n-i;j++)
    {
        cout<<" ";
    }
    for (int k=1;k<=i;k++)
    {
        cout<<"* ";
    }
    cout<<"\n";
}
for (int l=1;l<=n;l++)
{
    for (int m=1;m<=l;m++)
    {
        cout<<"* ";
    }
    for (int o=1;o<=n-l;o++)
    {
        cout<<" ";
    }
    cout<<"\n";
}
    return 0;
}

