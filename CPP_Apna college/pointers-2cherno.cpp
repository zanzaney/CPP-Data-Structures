#include<iostream>
using namespace std;
int main()
{
    char* buffer = new char[8]; // here we are acually assigning 8 bytes of memory to the pointer
                                // and is returning a pointer to the beginning of the block of memory
    memset(buffer,0,8); //if we see this in memory then all the 8 spaces of memory will be 0s
    //this data is heap allocated so we should also delete the data when we are done with it
    delete[] buffer;

}
