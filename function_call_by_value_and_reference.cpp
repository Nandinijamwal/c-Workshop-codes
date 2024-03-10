#include <iostream>
using namespace std;
void f(int x, int &y)
{
x++;
y++;
}
int main()
{
int x= 5;
int y= 5;
f(x,y);
cout<<x<<"\n"<<y;
return 0;}
