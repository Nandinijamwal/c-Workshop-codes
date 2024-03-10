#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ int arr[6],sum=0;
for (int i=0;i<=6;i++)
{
    cin>>arr[i];
}
for (int i=0;i<=6;i++)
{
    cout<<"elements: "<<arr[i];
    cout<<"\n";
}
for (int i=0;i<=6;i++)
{
    sum=arr[i]+sum;
}
cout<<<<"sum: "<<sum;
return 0;
}
