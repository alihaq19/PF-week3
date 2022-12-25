#include <iostream>
using namespace std;
main()
{
int acc;
int ivelocity;
int time;
int fvelocity;
cout<<"Enter acceleration ";
cin>>acc;
cout<<"Enter initial velocity ";
cin>>ivelocity;
cout<<"Enter time ";
cin>>time;
fvelocity=acc*time+ivelocity;
cout<<"The final velocity is "<<fvelocity;
}