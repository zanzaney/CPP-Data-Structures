#include<iostream>
using namespace std;
int funct(float x,float y)
{
    return (x+y);

}
int funct(const int x,const int y)
{
    return(x+y+1);

}
int main(){

    int x = 11;
    int y = 14;
    cout<<funct(x,y)<<endl;

}
