#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>names;
    for(int i=0;i<n;i++)
    {string name;
    cin>>name;
    names.push_back(name);}
    cout<<"NO\n";
    for(int i=1;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<i;j++)
        {
            if(names[i]==names[j])
            {
                cnt=cnt+1;
            }
        }
        if(cnt>=1)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
    }
    return 0;
}
