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
    cout<<"ele to search: ";
    cin>>ele;
    bool flag=false;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid =(l+r)/2;
        if(word[mid]==ele)
        {
            flag=true;
            cout<<mid<<endl;
            break;
        }
        else if(word[mid]>ele)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if (flag==true)
    {
        cout<<"FOUND";
    }
    else
    {
        cout<<"NOT FOUND";
    }
    return 0;
}

