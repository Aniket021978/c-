#include<iostream>
using namespace std;
int main()
{
    while(true){
    int a,b,c,d,lcm,hcf,temp;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    c=a;
    d=b;
    while(d!=0){
        temp=d;
        d=c%d;
        c=temp;
        cout<<d<<" ";
    }
    hcf=c;
    lcm=(a*b)/hcf;
    cout<<"\nlcm ("<<a<<","<<b<<")="<<lcm;
     cout<<"\nhcf ("<<a<<","<<b<<")="<<hcf;
     cout<<endl;
    }
    return 0;
}