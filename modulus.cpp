#include <iostream>
using namespace std;
main()
{
int number;
int result1;
int result2;
int result3;
int result4;
int result5;
int result6;
int result7;
int result8;
int result9;
int total;
cout<<"Enter a 4-digit number ";
cin>>number;
result2=number/10;
result3=result2/10;
result4=result3/10;
result5=number%10;
result6=result2%10;
result7=result3%10;
result8=result4%10;
total=result5+result6+result7+result8;
cout<<"The sum of the 4-digit number is "<<total;

}