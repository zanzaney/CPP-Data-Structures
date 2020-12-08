#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
float PI=22.0/7.0;

int j;
cout<<"Value of pi :\n ";
for(j=2;j<=6;j++)
{

cout.precision(j);
cout<<PI<<"\n";
}
return 0;
}
