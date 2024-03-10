#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"Enter Amount\t";
int amt;
cin>>amt;
float per= 1.0*(amt*18)/100;
float res = per+amt;
cout<<"Amount with GST is :";
cout<<res;
return 0;
}
