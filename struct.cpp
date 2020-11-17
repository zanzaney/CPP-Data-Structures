#include<iostream>
using namespace std;

struct sample{
int x;
float y;
double z;
};

main(){

    structsample s1;
    //struct sample s1={10,12.34,34.56};
    s1.x=10;//x = 00,01,02,03
    s1.y=12.34;//y address=04,05,06,07
    s1.z=34.56;
    cout<<"x="<<s1.x<<endl;
    cout<<"address of x="<<&s1.x<<endl;
    cout<<"size of structure"<<sieof(sample);

    cout<<"size of object"<<sizeof(s1);




}
