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
        if(n%3==0)
        {
            n++;
            continue;
        }
        else
            {cout<<n;
             cout<<"\n";}
        n++;
    }
    return 0;
}
