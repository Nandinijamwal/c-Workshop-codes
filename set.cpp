#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    set<int>s;
    while(1)
    {
        cout<<"\n\nOperations : \n1. Insert\n2. Delete\n3. Size\n4. find\n5. Show\n6. Exit\n";
    cin>>n;
        int ele;
        if(n==1)
        {
            cout<< "\nelement:\t";
            cin>>ele;
            s.insert(ele);
            cout<<"\nDONE\n";
        }
        else if(n==2)
        {
            cout<< "\nelement:\t";
            cin>>ele;
            s.erase(ele);
             cout<<"\nDONE\n";
        }
        else if(n==3)
        {
            cout<<s.size()<<endl;
             cout<<"\nDONE\n";
        }
        else if(n==4)
        {
            cout<< "\nelement:\t";
            cin>>ele;
            if(s.find(ele)==s.end())
            {
                cout<<"\nNOT FOUND\n";
                 cout<<"\nDONE\n";
            }
            else
            {
                cout<<"\nFOUND\n";
                 cout<<"\nDONE\n";
            }
        }
        else if(n==5)
        {
            for(auto it:s)
            {
                cout<<endl;
                cout<<it<<endl;
            }
        }
        else if(n==6)
        {
            break;
        }
        else
        {
            cout<<"\nINVALID INPUT\nTRY AGAIN!\n";
        }
    }
    return 0;

}
