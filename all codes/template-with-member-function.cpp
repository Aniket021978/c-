#include<iostream>
using namespace std;
template <class t>
class aniket{
    public:
    t data;
    aniket(t a){
        data=a;
    }
    void disp();
};
template <class t>
    void aniket<t>::disp(){
        cout<<data;
    }
    void func(int a){
        cout<<"the 1st vlue of "<<a<<endl;
    }
    template <class t>
    void func1(t a){
        cout<<a<<endl;
    }
int main()
{
    aniket <int>a1(5);
    cout<<a1.data<<endl;
    a1.disp();
    func(4);
    func1(4);
    return 0;
}