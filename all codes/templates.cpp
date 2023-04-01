#include<iostream>
using namespace std;
template <class t>
class vector{
    public:
    t* arr;
    int size;
    vector(t m){
        size=m;
        arr=new t[size];
    }
    t dotprod(vector &v){
        t d=0;
        for(int i=0;i<size;i++){
            d +=this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector <float>v1(3);
    v1.arr[0]=1.1; 
    v1.arr[1]=2.2;
    v1.arr[2]=3.3;
    vector <float>v2(3);
    v2.arr[0]=4.4;
    v2.arr[1]=5.5;
    v2.arr[2]=6.6;
    float a=v1.dotprod(v2);
    cout<<a<<endl;
    return 0;
}