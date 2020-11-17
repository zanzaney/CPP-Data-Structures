#include<iostream>
using namespace std;
class average
{
    private: int a;
             int b;
             friend int sum(average k);
    public:  void setvalue()
    {

        a=56;
        b=33;
    }
    friend float mean(average k);
};

float mean(average p)
{
    return((p.a+p.b)/2);

}
int sum(average h)
{
    return(h.a+h.b);
}
int main()
{
    average object1;
    object1.setvalue();
    cout<<"mean = "<<mean(object1)<<endl;
    cout<<"sum = "<<sum(object1)<<endl;
    return 0;

}
