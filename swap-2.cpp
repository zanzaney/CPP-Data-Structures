//swapping of two numbers
#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    void swap(int num1,int num2);
    swap(num1,num2);//pass by value
    //cout<<num1<<num2<<endl;


}
void swap(int num1, int num2){// in pass by value the change happens in locally, it doesn't show in the main() function
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<num1<<num2<<endl;
}
