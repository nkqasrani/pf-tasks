#include<iostream>
using namespace std;
void result(int scores);
main(){
int marks;
cout<<"Enter your score: ";
cin>>marks;
result(marks);
}
void result(int scores)
{

if(scores>50)
cout<<"Pass";
else
cout<<"Fail";
}
