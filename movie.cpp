#include <iostream>
using namespace std;
main()
{
string movie;
int ATprice;
int CTprice;
int ATsold;
int CTsold;
float perC;
int total;
int cal1;
int cal2;
float DC;
cout<<"Enter the name of the movie ";
cin>>movie;
cout<<"Enter the price of adult ticket ";
cin>>ATprice;
cout<<"Enter the price of child ticket ";
cin>>CTprice;
cout<<"Enter the number of adult tickets sold ";
cin>>ATsold;
cout<<"Enter the number of child tickets sold ";
cin>>CTsold;
cout<<"Enter the percentage of money to be donated to charity ";
cin>>perC;
cal1=ATprice*ATsold;
cal2=CTprice*CTsold;
total=cal1+cal2;
cout<<"The total amount generated from the tickets is "<<total<<endl;
perC=total*0.1;
DC=total-perC;
cout<<"The total amount after donating to charity is "<<DC;
 
}