#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int st=0;
    int en=word.size()-1;
    while (st<word.size())
    {
        if (word[st]!=word[en])
        {
            cout<< "NOT";
            break;
        }
        st++;
        en--;
    }
    if (st==word.size())
        cout<<"YES";
    return 0;
}
