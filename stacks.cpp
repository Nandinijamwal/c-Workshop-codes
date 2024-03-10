#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i=1; i<=n;i++)
    {
        string command;
        cin>> command;
        if(command =="push")
        {
            int x;
            cin>>x;
            st.push(x);
        }
        else if(command=="top")
        {
            if (st.size()==0)
                continue;
            cout<<st.top();
        }
        else if(command=="pop")
        {
            if (st.size()==0)
                continue;
            st.pop();
        }
        else
        {
            cout<<"INVALID INPUT";
        }
    }
    return 0;
}
