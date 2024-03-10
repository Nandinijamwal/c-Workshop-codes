#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int st=1;
    cout<<"Enter number:\t";
    cout<<"\n";
    cin>>num;
   while (st<=num)
   {
       int x;
       cin>>x;
       int count_;
       int st2=2;
       while (st2<=sqrt(x))
       {
           if (x%st2==0)
           {
               count_++;
           }
           st2++;
       }
       if (count_==2)
       {
           cout<<"YES";
       }
       else
       {
           cout<<"NO";
       }
       st++;
   }
    return 0;
}
