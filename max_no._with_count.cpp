#include <iostream>
using namespace std;
int main()
{int rep=0;
int num1;
cout<<"Enter number 1:\t";
cin>>num1;
int num2;
cout<<"Enter number 2:\t";
cin>>num2;
int num3;
cout<<"Enter number 3:\t";
cin>>num3;
if ((num1>num2)&&(num1>num3))
    {cout<<num1;
    cout<<"\tis greatest";
    if(num1==num2&&num1==num3)
        {rep=rep+2;
        cout<< "number repeated" << rep << "times";}
    else if(num1==num2 || num1==num3)
    {
        rep=rep+1;
        cout<< "number repeated" << rep << "times";
    }}
else if (num2>num3)
{cout<<num2;
    cout<<"\tis greatest";
     if(num1==num2&&num2==num3)
        {rep=rep+2;
        cout<< "number repeated" << rep << "times";}
    else if(num1==num2 || num2==num3)
    {
        rep=rep+1;
        cout<< "number repeated" << rep << "times";}}
else
{
    cout<<num3;
    cout<<"\tis greatest";
     if(num3==num2&&num2==num3)
        {rep=rep+2;
        cout<< "number repeated" << rep << "times";}
    else if(num3==num2 || num1==num3)
    {
        rep=rep+1;
        cout<< "number repeated" << rep << "times";}}

return 0;}

