#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b)
    {
        if (abs(a)<abs(b))
            return true;
            return false;    }
int main()
{
    int n;
    cin>>n;
    int word[n];
    for(int i=0;i<n;i++)
    {
        cin>> word[i];
    }
    sort(word,word+n,compare);
     for(int i=0;i<n;i++)
    {
        cout<< word[i]<<"\n";
    }
    return 0;
}

