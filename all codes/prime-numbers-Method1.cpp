#include<iostream>
#include<math.h>
using namespace std;
void primenumber(int n)
{
    while(n%2==0){
        cout<<2<<" ";
        n=n/2;
    }
    for(int i=2; i <= sqrt(n); i=i+1){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2)
        cout<<n<<" ";
}
    int main(){
        int i;
        cout<<"enter the value of i:";
        cin>>i;
        primenumber(i);
    return 0;
}