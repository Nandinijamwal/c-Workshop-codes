#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,k;
    cin>> num;
    cin>> k;
    for(int i=0;i<k;i++)
    {
        if(num%10!=0)
        {
            num=num-1;
        }
        else
        {
            num=num/10;
        }
    }
    cout<<num;
return 0;
}
