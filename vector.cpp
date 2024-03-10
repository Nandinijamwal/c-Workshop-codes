#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ vector <int> v;
    int sum=0;
int x;
cin>>x;
for (int i=0;i<x;i++)
{
    int n;
    cin>>n;
    v.push_back(n);
}
for (int k=0;k<v.size();k++)
{
    cout<<v[k];
    cout<<"\n";
}
for (int j=0;j<v.size();j++)
{
    sum=sum+ v[j];
}
cout<<sum;
return 0;
}
