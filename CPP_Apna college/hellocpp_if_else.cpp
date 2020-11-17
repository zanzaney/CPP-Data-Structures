#include<iostream>
using namespace std;

int main(){

    int amount;
    cin>>amount;
    if(amount>5000){
    cout<<"Neha\n";
            if(amount>10000){
            cout<<"Roadtrip with Neha"<<endl;
        }else{
            cout<<"Shopping with Neha"<<endl;
        }
    }else if(amount>2000){

    cout<<"Rashmi\n";
    }else{

    cout<<"Friends\n";
    }

    return 0;
}
