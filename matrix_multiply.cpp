#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
int r1,r2,c1,c2;
cout<<"row1 :";
cin>>r1;
cout<<"column1 :";
cin>>c1;
cout<<"row2 :";
cin>>r2;
cout<<"column2 :";
cin>>c2;
int arr[r1][c1];
int arr1[r2][c2];
int arr2[r1][c2];
cout<<"ele for A1 :\n";
for (int i=0;i<r1;i++)
{
    for ( int j=0;j<c1;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<"ele for A2 :\n";
for (int i=0;i<r2;i++)
{
    for ( int j=0;j<c2;j++)
    {
        cin>>arr1[i][j];
    }
}
cout<<"A1 : \n";
for (int i=0;i<r1;i++)
{
    for ( int j=0;j<c1;j++)
    {
     cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"A2 : \n";
for (int i=0;i<r2;i++)
{
    for ( int j=0;j<c2;j++)
    {
     cout<<arr1[i][j]<<" ";
    }
    cout<<"\n";
}
for (int i=0;i<r1;i++)
{
    for (int j=0;j<c2;j++)
    {
        for(int k=0;k<r2;k++)
        {
            sum=sum+(arr[i][k]*arr1[k][j]);
        }
        arr2[i][j]=sum;
        sum=0;
    }
}
cout<<"multiplied: \n";
for (int i=0;i<r1;i++)
{
    for ( int j=0;j<c2;j++)
    {
     cout<<arr2[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;}  `
