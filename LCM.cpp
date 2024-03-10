#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    int i;
    cout<<"Enter number1:\t";
    cout<<"\n";
    cin>>num1;
    cout<<"Enter number2:\t";
    cout<<"\n";
    cin>>num2;
    (num1<num2)? (i=num2) : (i=num1);
    while (1)
    {
        if (i%num1==0 && i%num2==0)
        {
            cout<< i;
            break;
        }
        i++;
    }
    return 0;
    }
