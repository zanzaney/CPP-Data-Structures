#include<iostream>
using namespace std;
class time
{
private:
    int hours;
    int minutes;
public:
    void assign(int h,int m)
    {

        hours = h;
        minutes = m;
    }
    void display(){
    cout<<"hours = "<<hours<<endl;
    cout<<"minutes = "<<minutes<<endl;
    }
    void sum(time,time);
};
void time :: sum(time t1,time t2)
{
    minutes = t1.minutes+t2.minutes;
    hours = minutes/60;
    minutes = minutes%60;
    hours = hours+t1.hours+t2.hours;

}
int main()
{

    time t1,t2,t3;
    t1.assign(8,200);
    t2.assign(7,300);
    t3.sum(t1,t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
