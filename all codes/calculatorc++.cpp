#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   char d;
   cout<<"enter a value of a:";
   cin>>a;
   cout<<"enter a value of b:";
   cin>>b;
    cout<<"enter operands:+,-,*,%,/ :";
   cin>>d;
   if(d == '+'){
       c=a+b;
       cout<<"the value of c="<<c;
   }
  else if(d == '-'){
      c=a-b;
      cout<<"the value of c="<<c;
  }
  else if(d == '*'){
      c=a*b;
      cout<<"the value of c="<<c;
  }
  else if(d == '%'){
      c=a%b;
      cout<<"the value of c="<<c;
  }
  else if(d == '/'){
      c=a/b;
      cout<<"the value of c="<<c;
  }
  else{
      cout<<"given value is incorrect";
  }
    return 0;
}