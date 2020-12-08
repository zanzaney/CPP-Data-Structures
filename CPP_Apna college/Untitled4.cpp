#include<iostream>
using namespace std;
class base
{
public:
void display()
{
cout<<"we are inside the display function of base class"<<endl;
}
virtual void show()
{
cout<<"we are inside the show function of base class"<<endl;
}
};
class derived:public base
{
public:
void display()
{
cout<<"we are inside the display function of derived class"<<endl;
}
void show()
{
cout<<"we are inside the show function of derived class"<<endl;
}
};
main()
{
base b1;
derived d1;
base *bptr;
bptr=&b1;
(*bptr).display();
(*bptr).show();
bptr=&d1;
(*bptr).display();
(*bptr).show();
}
