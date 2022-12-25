#include <iostream>
using namespace std;
main()
{
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int sum;
string name;
float percentage;
float divide;
cout<<"Enter your name ";
cin>>name;
cout<<"Enter the marks for your first subject ";
cin>>sub1;
cout<<"Enter the marks for your second subject ";
cin>>sub2;
cout<<"Enter the marks for your third subject ";
cin>>sub3;
cout<<"Enter the marks for your fourth subject ";
cin>>sub4;
cout<<"Enter the marks for your fifth subject ";
cin>>sub5;
sum=sub1+sub2+sub3+sub4+sub5;
divide=sum*100;
percentage=divide/500;
cout<<"Your respective percentage for 5 subjects is "<<percentage;

}
