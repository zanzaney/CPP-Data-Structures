#include<iostream>
using namespace std;
class student{
public:
    char name[20];
    int roll_no;
    int cgpa;
private:
    void get_data(){
    cin>>name;
    cin>>roll_name;
    cin>>cgpa;

    }
    void put_data();

};

void student :: put_data(){
    cout<<"The name is "<<name<<endl;
    cout<<"The Roll Number is "<<roll_no<<endl;
    cout<<"The CGPA is "<<cgpa<<endl;

}

int main(){
    student s1,s2,s3;

    s1.get_data();
    s1.put_data();

}
