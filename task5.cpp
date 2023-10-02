#include<iostream>
using namespace std;
void age(int n);
main(){
int age_of_person;
cout<<"Enter your age: ";
cin>>age_of_person;
age(age_of_person);	
}
void age(int n)
{

if(n>=18)
cout<<"You are eligible to vote.";
else
cout<<"You are not eligible to vote.";
}
