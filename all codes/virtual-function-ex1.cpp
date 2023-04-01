#include<iostream>
using namespace std;
class ab{
    protected:
    string title;
    float rating;
    public:
    ab(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display(){
    }
};
class abvideo:public ab{
    protected:
    float videolength;
    public:
    abvideo(string s,float r,float vl):ab(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"the title of our example is : "<<title<<endl;
        cout<<"the rating of our example is : "<<rating<<"out of 5 star is : "<<endl;
        cout<<"the videolength of your example is : "<<videolength<<endl;
    }
};
class abwords:public ab{    
    protected:
    int words;
    public:
    abwords(string s,float r,int vw):ab(s,r){
        words=vw;
    }
    void display(){
        cout<<"the title of our example is : "<<title<<endl;
        cout<<"the rating of our example is : "<<rating<<"out of 5 star "<<endl;
        cout<<"the words of your example is : "<<words<<endl;
    }
};
int main()
{
    string title;
    float vl,rating;
    int words;
    title="aniket bansal virtual function";
    rating=5;
    vl=5;
    abvideo a(title,rating,vl);
    a.display();

    title="aniket bansal virtual function";
    rating=5;
    words=5;
    abwords b(title,rating,words);
    b.display();

    anshu* tuts[2];
    tuts[0]=&a;
    tuts[1]=&b;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}