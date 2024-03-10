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
int arr1[r][c];
int arr2[r][c];
cout<<"ele for A1 :\n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<"ele for A2 :\n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
        cin>>arr1[i][j];
    }
}
cout<<"A1 : \n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"A2 : \n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
     cout<<arr1[i][j]<<" ";
    }
    cout<<"\n";
}
for (int i=0;i<r;i++)
{
    for (int j=0;j<c;j++)
    {
       arr2[i][j]= arr[i][j]+arr1[i][j];
    }
}
cout<<"added: \n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
     cout<<arr2[i][j]<<" ";
    }
    cout<<"\n";
}
}

