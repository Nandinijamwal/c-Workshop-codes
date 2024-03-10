#include <iostream>
using namespace std;
void f(int x, int &y)
{
x++;
y=y+x;
}
int main()
{
int x=2;
int y= 3;
f(x,y);
cout<<x<<"\n"<<y;
return 0;}
