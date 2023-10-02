#include<iostream>
using namespace std;
void even(int num);
void odd(int num);
main()
{ 
int number;
cout<<"Enter a number: ";
cin>>number;
if(number%2==0)
 even(number);
else
odd(number);
}
void even(int num)
{
cout<<"Number "<<num<<" is even";
}
void odd(int num)
{
cout<<"Number "<<num<<" is odd";
}