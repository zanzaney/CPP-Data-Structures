#include<iostream>
using namespace std;
class employee
{
    private: char name[20];
             int age;
    public: void readdata();
            void putdata();

};

void employee :: readdata()
{
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your age: "<<endl;
    cin>>age;

}
void employee :: putdata()
{
    cout<<"Employee details are: "<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;

}
int main(){

    employee emp[3];
    for(int i=0;i<=2;i++){
        emp[i].readdata();
    }
    for(int i=0;i<=2;i++){
        emp[i].putdata();
    }
    return 0;

}
