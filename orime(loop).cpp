#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int n=1;
    int count=0;
    cout<<"Enter number:\t";
    cout<<"\n";
    cin>>num;
    while(n<=num)
    {
        if (num%n==0)
        {
            count=count+1;
        }
        n++;
    }
    if (count==2)
    {
        cout<<"PRIME";
    }
    else
    {
        cout<<"NOT PRIME";
    }
    return 0;
}
