#include<iostream>
using namespace std;
int main()
{
   string* spr1;string* spr4;
   float* spr2;float* spr3;
   char* ab1;char* ab2;
   double* cd1;double* cd2;
   string s,p;
   float a,b;
   char e,f;
   double c,d;
    s="hello";spr1=&s;p="hey";spr4=&p;
    a=10.02;spr2=&a;b=20.04;spr3=&b;
    e=65;ab1=&e;f=97;ab2=&f;
    c=12.868;cd1=&c;d=16.6746;cd2=&d;
    cout<<*spr1<<" "<<*spr2<<" "<<*spr4<<" "<<*spr3<<" "<<*ab1<<" "<<*ab2<<" "<<*cd1<<" "<<*cd2<<" ";
    return 0;
}