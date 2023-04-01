#include<iostream>
using namespace std;
template <class t,class t1>
class types{
    public:
    t data;
    t1 data1;
    types(t a,t1 b){
        data=a;
        data1=b;
    }
    void disp(){
        cout<<this->data<<endl<<this->data1;
    }
};
int main()
{
    types <int,char> ty(2,'A');
    ty.disp();
    return 0;
}