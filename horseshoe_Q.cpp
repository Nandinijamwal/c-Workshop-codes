#include<bits/stdc++.h>
using namespace std;
int main()
{
   set<int>s;
   int count=0;
   for(int i=0;i<4;i++)
   { int ele;
     cin>>ele;
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
