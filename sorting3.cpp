#include<bits/stdc++.h>
using namespace std;
int main()
{
    int word[6];
    for(int i=0;i<6;i++)
    {
        cin>> word[i];
    }
    int n;
    int s=5;
    int maxi;
    for (int ele=1;ele<=s;ele++)
    {
        for (n=ele;n>0;n--)
       {
           if(word[n]<word[n-1])
            {
                maxi=word[n];
                word[n]=word[n-1];
                word[n-1]=maxi;
            }
            else
            {
                break;
            }
       }
    }
    for(int d=0;d<6;d++)
    {
        cout<<"\n";
        cout<<word[d];
        cout<<"\n";
    }
    return 0;
}

