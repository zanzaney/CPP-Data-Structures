#include<iostream>
using namespace std;
int main()
{/*
    int var = 8;
    void* ptr = &var;
    cout<<ptr;//this gives us the memory address of var
    return 0;
*/
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    cout<<var;//we see that the value is changed to 10
    return 0;
}
