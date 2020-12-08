#include<iostream>
using namespace std;
int main()
{
    int var = 8;
    void* ptr = &var;
    cout<<ptr;//this gives us the memory address of var
    return 0;

}
