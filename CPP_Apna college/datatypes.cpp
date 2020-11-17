#include<iostream>
using namespace std;
int main(){

    int a;//declaration
    a =12;//initialization
    cout<<sizeof(a)<<endl;

    float b ;
    b = 13.14;
    cout<<sizeof(b)<<endl;

    double d;
    d = 14.46678;
    cout<<sizeof(d)<<endl;

    char c;
    c = 'd';
    cout<<sizeof(c)<<endl;

    bool k;
    cout<<sizeof(k)<<endl;

    short int si;
    long int li;

    cout<<"size of si "<<sizeof(si)<<endl;
    cout<<"size of li "<<sizeof(li)<<endl;
    return 0;


}
