#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<char> st;
    for(int i=1; i<=n;i++)
    {
            char x;
            cin>>x;
            if (x=='(')
            {st.push(x);}
            else if (x==')')
            {
                st.pop();
            }
    }
        cout<<"CHECKING PARENTHESIS EXPRESSION: "<<endl;
        if (st.size()==0)
        {
            cout<<"VALID";
        }
        else
        {
            cout<<"INVALID";
        }

    return 0;
}
