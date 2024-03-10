#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    string ans;
    int st=0;
    int en=word.size()-1;
    int half=word.size();
    int hall=half/2;
    while (st<hall)
    {
        ans[0]= word[st];
        word[st]=word[en];
        word[en]=ans[0];
        st++;
        en--;
    }
    cout<<word;
    return 0;
}
