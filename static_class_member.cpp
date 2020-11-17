#include<iostream>
using namespace std;
class dataitem
{
    private: int number;
             static int count;

    public: void readdata(int ival){
                number = ival;
                count =count+1;

            }
            void displaycount(){
                cout<<"count = "<<count<<endl;

            }

};
int dataitem :: count; //by default static class member's first initialization is equal to 0
int main()
{
    dataitem x,y;
    x.displaycount();
    y.displaycount();
    x.readdata(45);
    y.readdata(77);
    x.displaycount();
    y.displaycount();
    return 0;
}
