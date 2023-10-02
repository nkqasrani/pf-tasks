#include<iostream>
using namespace std;
void sticker(int l);
main()
{
int length;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>length;
sticker(length);
}
void sticker(int l)
{ int stickers;
stickers=l*l*6;
cout<<"Number of stickers needed: "<<stickers;
}