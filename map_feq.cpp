#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1;
    cin>>n;
    cin>>n1;
    i=n+n1;
    map<int,int>m;
    int arr[]={7,3,3,4,5,6,6,7,8,3};
    for(int i=0;i<10;i++)
    {
            if(m.find(arr[i])==m.end())
            {
                m[arr[i]]=1;
            }
            else
            {
                m[arr[i]]++;
            }
    }
    for(auto it:m)
    {
        cout<<it.first<<"\t:\t"<<it.second<<endl;
    }
    return 0;

}
