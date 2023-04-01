#include<iostream>
using namespace std;
class unary{
    private:
    int a,b,c;
    public:
    unary(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void disp(){
        cout<<a<<b<<c;
    }
     void operator ++(){
         a++;
         b++;
         c++;
     }
};
int main()
{
    unary obj(1,2,3);
    cout<<"before unary"<<endl;
    obj.disp();
    ++obj;
    cout<<endl<<"after unary"<<endl;
    obj.disp();
    return 0;  
}