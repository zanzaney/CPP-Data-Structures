#include<iostream>
using namespace std;
class a
{
public:
    class b
    {
        private: int n1;
        public: void assign(int n2){
                    n1=n2;

        }
        void printdata(){
            cout<<n1<<endl;

        }

    };

};
int main()
{
    a::b object_b;//creating an object of sub-class b
    object_b.assign(355);
    object_b.printdata();
    return 0;

}
