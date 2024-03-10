#include<bits/stdc++.h>
using namespace std;
int main()
{
    int word[6];
    for(int i=0;i<6;i++)
    {
        cin>> word[i];
    }
    int sum=0;
    int coun=0;
    cout<<"sum? : ";
    cin>>sum;
    for (int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
           for (int k=j+1;k<6;k++)
           {
                if((word[i]+word[j]+word[k])==sum)
            {
                coun=coun+1;
                cout<<word[i]<<"+"<<word[j]<<"+"<<word[k]<<"="<<sum;
                cout<<"\n";
                break;
            }
           }
        }
    }
    if (coun>0)
        {
            cout<<"yes";
            cout<<"\n";
            cout<<coun;
        }
    else
    {
        cout<<"no";
    }
    return 0;
}
