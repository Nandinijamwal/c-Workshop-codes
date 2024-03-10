#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int fact;
    int n=1;
    cout<<"Enter number:\t";
    cout<<"\n";
    cin>>num;
    while(sqrt(num)>=n)
    {
        if(num%n==0)
        {
            cout<<n;
            cout<<"\n";
            fact=num/n;
            cout<<fact;
            cout<<"\n";
        }
        n++;
    }
    return 0;
}
