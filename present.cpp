#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int ans[n];
     for(int i=0;i<n;i++)
    {
       ans[ar[i]]=i;
    }
    for(int i=0;i<n;i++)
    {
       cout<<ans[i]<<" ";
    }

    return 0;
}
