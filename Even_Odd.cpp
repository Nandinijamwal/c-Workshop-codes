#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num1;
cout<<"Enter number :\t";
cin>>num1;
bool isOdd=!(num1%2==0);
if(isOdd)
cout<<"ODD";
else
cout<<"EVEN";
return 0;
}
