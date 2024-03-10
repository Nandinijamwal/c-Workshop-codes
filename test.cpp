#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<string>s;
    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        if(s.find(name)!=s.end())
            {cout<<"YES\n";
            continue;}
        else{cout<<"NO\n";}
        s.insert(name);
    }
    return 0;
}
