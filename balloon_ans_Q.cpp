#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
         set<char>s;
        int len;
        cin>>len;
        int count=0;
        for(int j=0;j<len;j++)
        {
            string ch;
            cin>>ch;
            if(s.find(ch[j])==s.end())
            {
                count=count+2;
                s.insert(ch[j]);
            }
            else
            {
                count=count+1;
            }
        }
        cout<<count<<endl;
    }

return 0;
}
