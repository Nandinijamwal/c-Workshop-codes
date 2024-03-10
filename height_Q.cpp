#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int ct=0;
int f;
cin>>f;
int h;
cin>>h;
int n=0;
while(f>n)
{
    int ht;
    cin>>ht;
    if(ht<=h)
    {
        ct=ct+1;
    }
    else
    {
        ct=ct+2;
    }
    n++;
}
cout<<ct;
return 0;
}
