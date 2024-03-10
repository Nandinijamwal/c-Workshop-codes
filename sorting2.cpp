#include<bits/stdc++.h>
using namespace std;
int main()
{
    int word[6];
    for(int i=0;i<6;i++)
    {
        cin>> word[i];
    }
    int n=0;
    int s=5;
    int maxi;
    while(s>=0)
    {maxi=0;
       for (n=0;n<s;n++)
       {
           if(word[n]>word[n+1])
            {
                maxi=word[n];
                word[n]=word[n+1];
                word[n+1]=maxi;
            }
       }
       s--;
    }
    for(int d=0;d<6;d++)
    {
        cout<<"\n";
        cout<<word[d];
        cout<<"\n";
    }
    return 0;
}

