#include<bits/stdc++.h>
using namespace std;
int main()
{
    int word[6];
    for(int i=0;i<6;i++)
    {
        cin>> word[i];
    }
    int n=0,ele;
    cout<<"ele to search: ";
    cin>>ele;
    bool found;
    for (int n=0;n<6;n++)
    {
       if(word[n]==ele)
            {found = true;
             if (found)
    {
        cout<<"index :" << n;
    }
    else
    {
        cout<<"not found";
    }
            break;}
    }
    return 0;
}

