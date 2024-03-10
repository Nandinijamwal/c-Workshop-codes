#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int num1;
int res;
cout<<"Enter number 1:\t";
cin>>num1;
int num2;
cout<<"Enter number 2:\t";
cin>>num2;
cout<<"Choose operation to perform: '+' or '-' or '*' or '/'    \t";
char op;
cin>>op;
if (op=='+')
    {res= num1+num2;
    cout<<"Result =";
    cout<<res;}
if (op=='-')
    {res= num1-num2;
    cout<<"Result =";
    cout<<res;}
if (op=='*')
    {res= num1*num2;
    cout<<"Result =";
    cout<<res;}
if (op=='/')
    {res= num1/num2;
    cout<<"Result =";
    cout<<res;}
return 0;
}
