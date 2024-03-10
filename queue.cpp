#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    while(1)
    {
        cout <<"\nCHOOSE:\n 1.PUSH\n 2.POP\n 3.FRONT\n  4.REAR\n 5.EXIT\n ";
        int ch;
        cin >>ch;
        if(ch==1)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        else if (ch==2)
        {
            if(q.size()==0)
            {
                cout<<"IT IS EMPTY";
            }
            else
            {
               q.pop();
            }
        }
        else if (ch==3)
        {
            cout<<q.front();
            cout<<endl;
        }
        else if (ch==4)
        {
            cout<<q.back();
        }
        else if(ch==5)
        {
            break;
        }

    }
    return 0;
}
