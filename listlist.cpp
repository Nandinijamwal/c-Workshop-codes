#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ vector <string> v;
int x,count=0;
cout<<"length: ";
cin>>x;
for (int i=0;i<x;i++)
{
    string n;
    cin>>n;
    v.push_back(n);
    if (v[i][0]=='a')
        {
            count=count+1;
        }
}
cout<<count;
return 0;
}
