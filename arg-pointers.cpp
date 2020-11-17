//swapping of two numbers
#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    void swap(int *n1,int *n2);
    swap(&num1,&num2);//pass by value
    cout<<num1<<num2<<endl;


}
void swap(int *n1, int *n2){// in pass by pointers the change happens in globally, it shows in the main() function
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    //cout<<num1<<num2<<endl;
}
