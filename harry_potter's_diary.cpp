#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>names;
    for(i=0;i<n;i++)
    {string name;
    cin>>name;
    names.push_back(name);}
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(names[i]==names[j])
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
    }
    return 0;
}
