#include<bits/stdc++.h>
using namespace std;
double calc (int gst,int n)
{
    int amt;
        cout<<"amt : ";
        cin>>amt;
        double total= amt+((amt*gst)/100.0);
        cout<<"\n";
        return total;
}
int main()
{
    int gst=18;
    int n,ad,sum;
    cout<<" \n no of amts : ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        ad=calc(gst,n);
        sum=sum+ad;
    }
    cout<<sum;
    return 0;
}

