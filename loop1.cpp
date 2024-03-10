#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int n=1;
    cout<<"Enter number:\t";
    cin>>num;
    while(num>=n)
    {
        cout<<num*num;
        cout<<"\n";
        num--;
    }
    return 0;
}
