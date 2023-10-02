#include<iostream>
using namespace std;
void discount(float purchase,string A);
main()
{
string day;
float total_purchase;
cout<<"Enter the day of purchase: ";
cin>>day;
cout<<"Enter the total purchase amount: $";
cin>>total_purchase;
discount(total_purchase,day);

}
void discount(float purchase,string A)
{
if(A =="Sunday")
{ 
float discount,payable_amount;
discount=(purchase*10)/100;
payable_amount=purchase-discount;
cout<<"Payable Amount: $"<<payable_amount;
}
else
{
cout<<"Payable Amount: $"<<purchase;
}
}
