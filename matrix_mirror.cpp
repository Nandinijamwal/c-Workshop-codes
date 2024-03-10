#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int r,c;
cout<<"row :";
cin>>r;
cout<<"column :";
cin>>c;
int arr[r][c];
cout<<"ele :\n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    '}
}
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
for (int i=0;i<r;i++)
{
    for ( int j=c-1;j>=0;j--)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
for (int i=r-1;i>=0;i--)
{
    for ( int j=0;j<c;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

return 0;}
