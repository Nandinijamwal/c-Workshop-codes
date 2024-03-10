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
cout<<"ele :\n";
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    }
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
    for (int j=0;j<c;j++)
    {
        if(i==j)
        {
           arr1[i][j]=arr[i][j];
        }
        else
        {
            arr1[i][j]=arr[j][i];

        }
    }
}
for (int i=0;i<r;i++)
{
    for ( int j=0;j<c;j++)
    {
     cout<<arr1[i][j]<<" ";
    }
    cout<<"\n";
}
}

