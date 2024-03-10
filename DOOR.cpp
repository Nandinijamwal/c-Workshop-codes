#include<bits/stdc++.h>
using namespace std;
int main()
{
    int door,open,close,i=1,count_=0,root;
    cout<<"Enter number of doors:\t";
    cout<<"\n";
    cin>>door;
    while (i<=door)
    {root=sqrt(i);
     if((root*root)==i)
    {
        ++count_;
    }
    i++;
    }
    open=count_;
    close=door-count_;
    cout<<"OPEN - " <<open<<"\n";
    cout<<"CLOSE - "<<close;

    return 0;
}
