#include<iostream>
using namespace std;
class checkobject
{
    private: static int num;
    public: static int totalobjects(){

            num=num+1;
            return(num);

    }
    void display(void){

        cout<<"object "<<num<<" is created so count = "<<num<<endl;
    }

};
int checkobject :: num;
int main(){
    checkobject cob1,cob2,cob3;
    checkobject :: totalobjects();
    cob1.display();
    checkobject :: totalobjects();
    cob2.display();
    checkobject :: totalobjects();
    cob3.display();
}
