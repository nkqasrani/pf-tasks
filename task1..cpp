#include<iostream>
using namespace std;
void calculate_fu(float dist);
main(){
float distance; 
cout<<"Enter the distance: ";
cin>>distance;
calculate_fu(distance);
}
void calculate_fu(float dist)
{
float fu;
fu=dist*10;
cout<<"Fuel needed: "<<fu;
}

