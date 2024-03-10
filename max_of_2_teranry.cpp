#include <iostream>
using namespace std;
int main()
{int num1;
cout<<"Enter number 1:\t";
cin>>num1;
int num2;
cout<<"Enter number 2:\t";
cin>>num2;
(num1>num2)?cout<<"NUM1":cout<<"NUM2";

//three num

cout<<"\n\nNEW.....\N\N";
int num_1;
cout<<"Enter number 1:\t";
cin>>num_1;
int num_2;
cout<<"Enter number 2:\t";
cin>>num_2;
int num_3;
cout<<"Enter number 3:\t";
cin>>num_3;
(num_1>num_2)?(num_1>num_3?cout<<"NUM1":cout<<"NUM3"):(num_2>num_3?cout<<"NUM2":cout<<"NUM3");
return 0;
}
