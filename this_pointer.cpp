#include<iostream>
using namespace std;
class number
{
    private: int x;
    public: void assign(int d){
        this -> x=d;

    }
    void printdata(){
    cout<<"the value of x is = "<<this ->x<<endl;
    cout<<"the address of x is = "<<this<<endl;

    }
};
int main(){

    number n1,n2;
    n1.assign(50);
    n2.assign(40);
    n1.printdata();
    n2.printdata();
    //both the addresses would be different(ask sir once)
    return 0;
}
