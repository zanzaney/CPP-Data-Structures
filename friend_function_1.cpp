#include<iostream>
using namespace std;
class ff
{
    private: int x,y;
    public: void readdata(){

        cout<<"Enter values of x and y";
        cin>>x>>y;

    }
    friend int average(ff);
    friend int largest(ff);

};
int average(ff m)
{
    return((m.x+m.y)/2);

}
int largest(ff m)
{
    if(m.x>m.y){
    return(m.x);
    }
    else{
    return(m.y);
    }
}
int main()
{
    ff m;
    m.readdata();
    cout<<average(m)<<endl;//we pass objects as arguments while calling friend functions
    cout<<largest(m)<<endl;
}
