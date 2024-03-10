#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
int kg;
int half;
//cout<<"Enter weight of watermelon:\t";
cin>>kg;
half=kg/2;
if (kg==2)
{
    cout<<"No";
}
else
{
if(kg%2==0)
{
 if (half%2==0)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
}
else
{
    cout<<"NO";
}
}
return 0;
}
