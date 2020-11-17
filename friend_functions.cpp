#include<iostream>
using namespace std;
class abc;//forward declaration
class xyz{

    private: int x;
    public: void assign(int i){
            x=i;

        }
        friend void max(xyz,abc);

};
class abc{

    private: int a;
    public: void assign(int i){

        a=i;

    }
        friend void max(xyz,abc);


};
void max(xyz n1,abc n2){

    if(n1.x > n2.a){
    cout<<n1.x<<endl;
    }
    else{
    cout<<n2.a<<endl;
    }

}
int main(){

    xyz objectxyz;
    objectxyz.assign(14);
    abc objectabc;
    objectabc.assign(15);
    max(objectxyz,objectabc);//here we are passing objects as arguments
    return 0;

}
