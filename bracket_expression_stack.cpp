#include <bits/stdc++.h>
using namespace std;
bool check (char open,char close)
{
     if (open=='('&&close==')')
        return true;
     if (open=='{' && close=='}')
        return true;
     if (open=='[' && close==']')
        return true;
}
int main()
{
    int n;
    cin>>n;
    stack<char> st;
            string x;
            cin>>x;
            for(int i=1; i<=n;i++)
            {
               if (x[i]=='('|| x[i]=='{'|| x[i]=='[')
            {st.push(x[i]);}
            else if (st.size()==0 || !check(st.top(),x[i]))
            {
                cout<<"INVALID";
                break;
            }
            else if (check(st.top(),x[i]))
            {
               st.pop();
            }
            }

        cout<<"\nCHECKING PARENTHESIS EXPRESSION: "<<endl;
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
