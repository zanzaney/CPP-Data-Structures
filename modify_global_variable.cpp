#include<iostream>
using namespace std;
int x= 670;
int main(){

    int x = 60;
    cout<<"in local scope x = "<<x<<" and in global scope "<<::x<<endl;
    ::x=240;
    cout<<"in local scope x = "<<x<<" and in global scope "<<::x<<endl;

}
