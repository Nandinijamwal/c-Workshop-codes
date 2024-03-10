#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<int>s;
   int count=0;
   int arr[100];
   a=arr.size();
   for(int i=0;i<a;i++)
   { int ele;
     cin>>ele;
     arr[i]=ele;
       if(s.find(ele)==s.end())
       {
           s.insert(ele);
       }
       else
       {
           count=count+1;
       }
   }
   cout<<count;
    return 0;
}
