#include<iostream>
using namespace std;
int main()
{
    int a,b,c=2,d,e,lcm,hcf=1;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    d=a;
    e=b;
    while(c<=a && c<=b){
        if(d%c==0 && e%c==0){
            d=d/c;
            e=e/c;
            hcf *=c;
        }
        else{
            c++;
        }
    }
        lcm=(a*b)/hcf;
        cout<<lcm;
    return 0;
}