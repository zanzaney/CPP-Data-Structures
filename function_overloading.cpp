#include<iostream>
using namespace std;
int funct (float x,float y)
{

    return(x+y);
}
int funct(const int x,const int y)
{

    return(x+y+1);
}
int main(){
    int x=3;
    int y=2;
    cout<<funct(x,y)<<endl;//this will return 6 as the arguments passed are of integer datatype


}
