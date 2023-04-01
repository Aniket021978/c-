#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_number(int m1){
        roll_no=m1;
    }
    void print_number(void){
        cout<<"the numbers of your roll call are :"<<roll_no<<endl;
    }
};
class test:virtual public student{
    protected:
    float c,js;
    public:
    void set_marks(float m1,float m2){
        c=m1;
        js=m2;
    }
    void print_marks(void){
        cout<<"your number in your languages are :"<<endl<<"c:"<<c<<endl<<"js:"<<js<<endl;
    }
};
class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float n1){
        score=n1;
    }
    void print_score(void){
         cout<<"your score in in your sport is :"<<score<<endl;
    }
};
class result:public test,public sports{
    protected:
    float total;
    public: 
    void display(void){
        total=c + js + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is :"<<total<<endl;
    }
};
int main()
{
    result rs;
    rs.set_number(184);
    rs.set_marks(95.5,95.2);
    rs.set_score(18);
    rs.display();
    return 0;
}