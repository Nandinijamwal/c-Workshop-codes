#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    int n=1;
    cout<<"Enter number1:\t";
    cout<<"\n";
    cin>>num1;
    cout<<"Enter number2:\t";
    cout<<"\n";
    cin>>num2;
    while(num1<num2? num1>=n : num2>=n)
    {
        if(num1%n==0 && num2%n==0)
        {
            num3=n;
        }
        n++;
    }
    cout<< num3;
    cout<<"\n";
    return 0;
}
