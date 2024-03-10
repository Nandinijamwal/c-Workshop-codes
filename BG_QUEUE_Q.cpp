#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int places;
    cin>>places;
    string que;
    cin>>que;
    for(int i=0;i<n-1;n++)
    {
        if(que[i]=='B' && que[i+1]=='G')
        {
            for(int j=0;j<places;j++)
                {swap(que[i],que[i+1]);
        }
    }
    }
    cout<<que;
    return 0;
}
