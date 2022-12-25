#include <iostream>
using namespace std;
main()
{
int sizefb;
int cbag;
int abag;
int cfp;
int cfa;
cout<<" Enter the size of the fertilizer bag in pounds ";
cin>>sizefb;
cout<<"Enter the cost of the bag ";
cin>>cbag;
cout<<"Enter the area covered in square feet by the bag ";
cin>>abag;
cfp=cbag/sizefb;
cout<<"Your cost of fertilizer per pound is "<<cfp<<endl;
cfa=cbag/abag;
cout<<"Your cost of fertilizing the area per square feet is "<<cfa;
}