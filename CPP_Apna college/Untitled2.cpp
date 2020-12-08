#include<iostream>
using namespace std;
class pract
{
int a,b,c;
public:
pract(int x, int y, int z)
{
a=x;
b=y;
c=z;
}
void show()
{
cout<<"\n Values "<<a<<"\t"<<b<<"\t"<<c;
}
};
int main()
{
pract object(10,20,30);
pract object2=object;
pract object3=object2;
object3.show();
return 0;
}
