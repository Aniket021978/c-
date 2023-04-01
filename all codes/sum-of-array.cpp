#include<iostream>
using namespace std;
int main()
{
    int arr[5],sum=0,i;
    int *ptr;
    cout<<"Enter 5 values:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    ptr=&arr[0];
    for(int i=0;i<5;i++){
        sum=sum+*(ptr+i);
    }
    cout<<sum;
    return 0;
}