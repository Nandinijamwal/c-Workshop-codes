#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int siz,maxi=0,maxi2=0;
cout<<"Enter Size of the array :\n";
cin>>siz;
int arr[siz];
for (int i=0;i<siz;i++)
{
    cout<<"Enter no: ";
    cin>>arr[i];
    if (arr[i]>maxi)
    {
        maxi=arr[i];
    }
}
for(int i=0;i<siz;i++)
{
   if (arr[i]>maxi2 && arr[i]<maxi)
    {
        maxi2=arr[i];
    }
}
cout<<"Max: "<<maxi;
cout<<"\n";
cout<<"Max 2: "<<maxi2;
return 0;
}
