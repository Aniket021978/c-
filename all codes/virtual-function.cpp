#include<iostream>
using namespace std;
class baseclass{
    public:
    int var_base=0;
    virtual void display(){ //this virtual means that output will show for derived class not for base class 
                            //but not using it the output will only show base class which is deafult.
        cout<<"displaying base class"<<var_base<<endl;
    }
};
class derivedclass:public baseclass{
    public:
    int var_derived=1;
    void display(){
        cout<<"displaying base class again"<<var_base<<endl;
        cout<<"displaying derived class"<<var_derived<<endl;
    }
};
int main()
{
    baseclass * bc;
    derivedclass dc;
    bc=&dc;
    bc->display();
    return 0;
}