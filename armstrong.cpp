#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int n,che=0;
    cout<<"Enter number:\t";
    cout<<"\n";
    cin>>num;
    int numm=num;
    while(num!=0)
    {
      n=num%10;
      num=num/10;
      che=che+(n*n*n);
    }
    if (che==numm)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
