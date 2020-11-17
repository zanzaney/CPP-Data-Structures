#include<iostream>
using namespace std;

int main(){

    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    if(sidea == sideb && sideb == sidec){
        cout<<"It is an equilateral triangle"<<endl;
    }else if(sidea==sideb || sideb==sidec || sidec==sidea){

        cout<<"It is an isoceles triangle"<<endl;
    }else{
        cout<<"It is a scalene triangle"<<endl;//all sides are of different lengths
    }


}
