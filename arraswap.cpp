#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int siz,swa;
cout<<"Enter Size of the array :\n";
cin>>siz;
int arr[siz];
for (int i=0;i<siz;i++)
{
    cout<<"Enter no: ";
    cin>>arr[i];
}
int news=siz;
if (siz%2!=0)
{
    news=siz-1;
}
for (int j=0;j<news;j+=2)
{
    swap(arr[j],arr[j+1]);
}
for (int k=0;k<siz;k++)
{
    cout<<"Entered nos: ";
    cout<<arr[k]<<"\n";
}
return 0;
}
