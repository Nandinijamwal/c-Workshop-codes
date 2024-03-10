#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num1;
cout<<"Enter number 1:\t";
cin>>num1;
int num2;
cout<<"Enter number 2:\t";
cin>>num2;
int num3;
cout<<"Swapping numbers...\n";
num3=num1;
num1=num2;
num2=num3;
cout<<"\nNum1 =" << num1;
cout<<"\nNum2 =" << num2;
return 0;
}
