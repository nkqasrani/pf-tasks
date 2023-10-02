#include<iostream>
using namespace std;
void feet(float inch);
main(){
float m_v_inches;
cout<<"Enter the measurement in inches: ";
cin>>m_v_inches;
feet(m_v_inches);
}
void feet(float inch)
{float feets;
feets=inch/12;
cout<<"Equivalent in feet: "<<feets;
}