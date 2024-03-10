#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int word[n];
    for(int i=0;i<n;i++)
    {
        cin>> word[i];
    }
    int ele;
    cout<<"difference to search: ";
    cin>>ele;
    int target;
//    int siz=(n-1)/2;
    for(int i=0;i<=n;i++)
    {
        target = ele + i;
        int l=1,r=n-1;
        while(l<=r)
    {
        int mid =(l+r)/2;
        if(word[mid]==target)
        {
            cout<<word[mid]<<","<<i<<endl;000045
            break;
        }
        else if(word[mid]>target)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    }
}
