#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ vector<vector<int>>v;
int n,m;
cout<<"row :";
cin>>n;
cout<<"column :";
cin>>m;
int sum=0,sum2=0;
for(int i=0;i<n;i++)
{
    vector<int>row;
    for(int j=0;j<m;j++)
    {
        int ele;
        cout <<"ele : ";
        cin>> ele;
        row.push_back(ele);
    }
    v.push_back(row);
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if (i-j==0)
        {
          sum=sum+v[i][j];
        }
         if (i+j==(n-1))
        {
            sum2=sum2+v[i][j];
        }
    }
}
cout<<sum;
cout<<"\n";
cout<<sum2;
cout<<"\n";
return 0;
}
