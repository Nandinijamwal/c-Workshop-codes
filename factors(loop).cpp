#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int n=1;
    cout<<"Enter number:\t";
    cout<<"\n";
    cin>>num;
    while(num>=n)
    {
        if(num%n==0)
        {
            cout<<n;
            cout<<"\n";
        }
        n++;
    }
    return 0;
}
