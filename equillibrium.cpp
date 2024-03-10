#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=0,c=0;
    cin>>n;
    float arr[3];
for(j=0;j<n;j++)
{

    for(i=0;i<3;i++)
    {
        cin>>arr[i];
    }

        a=a+arr[0];
        b=b+arr[1];
        c=c+arr[2];

}
if(a==0&&b==0&&c==0)
    cout<<"YES";
else
    cout<<"NO";
return 0;
}
