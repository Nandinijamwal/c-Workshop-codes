#include<bits/stdc++.h>
using namespace std;
int main()
{
    int word[6];
    int maxi=0;
    int maxi2=0;
    for(int i=0;i<6;i++)
    {
        cin>> word[i];
    }
    for(int i=0;i<6;i++)
    {
        if(word[i]>maxi)
        {
            maxi=word[i];
        }
    }
    for(int i=0;i<6;i++)
    {
        if(word[i]>maxi2 && maxi!=word[i])
        {
            maxi2=word[i];
        }
    }
    cout<<maxi+maxi2;
    return 0;
}
