#include <iostream>
using namespace std;
main()
{
float vprice;
float fprice;
int kgveg;
int kgfruit;
float vcost;
float fcost;
float total;

cout<<"Enter the price of vegetables ";
cin>>vprice;
cout<<"Enter the price of fruits ";
cin>>fprice;
cout<<"Enter the weight of vegetables in kgs ";
cin>>kgveg;
cout<<"Enter the weight of fruits in kgs ";
cin>>kgfruit;
vcost=vprice*kgveg;
fcost=fprice*kgfruit;
total=vcost+fcost;
cout<<"The total cost is "<<total;



}