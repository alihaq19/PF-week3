#include <iostream>
using namespace std;
main()
{
string name;
float matric;
float inter;
float ecat;
float matricp;
float interp;
float ecatp;
float matricw;
float interw;
float ecatw;
float total;
cout<<"Enter your name ";
cin>>name;
cout<<"Enter your matriculation marks ";
cin>>matric;
cout<<"Enter your intermediate marks ";
cin>>inter;
cout<<"Enter your ecat marks ";
cin>>ecat;
matricp=matric/1100*100;
interp=inter/1100*100;
ecatp=ecat/400*100;
matricw=matricp*10/100;
interw=interp*40/100;
ecatw=ecatp*50/100;
total=matricw+interw+ecatw;
cout<<"Your aggregate is "<<total;
}