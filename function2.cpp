#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string rev(string &s)
{
int i=0;
int j=s.size()-1;
while(i<j)
{

    swap(s[i],s[j]);
    i++;
    j++;
}
return s;
}
int main()
{
string s="abc";

res= rev(s);
cout<<res;
cout<<rev(s);
return 0;}
