#include<iostream>
using namespace std;
void calculate_fuel(float dis);
main(){
float distance; 
cout<<"Enter the distance: ";
cin>>distance;
calculate_fuel(distance);
}
void calculate_fuel(float dis)
{
float fuel;
fuel=dis*10;
if(fuel<100)
cout<<"Fuel needed: 100";
else
cout<<"Fuel needed: "<<fuel;
}

