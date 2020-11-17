#include<iostream>
using namespace std;
class sample
{
    private: int m;
             int read();
    public: int update();
            int write();

};
int main(){

    sample s1;
    s1.update();
    return 0;

 }
int sample :: read()
{
     return(64);

 }
int sample :: update()
{
     int c;
     c=read();//accessing private member functions
     cout<<c<<endl;
}
