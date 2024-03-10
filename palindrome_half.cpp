#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    if (word.size()%2==0)
    {int st=0;
    int en=(word.size()/2);
    while (en<word.size())
    {
        if (word[st]!=word[en])
        {
            cout<< "NOT";
            break;
        }
        st++;
        en++;
    }
    if (en==word.size())
        cout<<"YES";}
    else
    {
        cout<<"NO";
    }
    return 0;
}
