#include<iostream>
using namespace std;
int main()
{
    float arr[100],sum,avg,n;
    cout<<"Enter no.of values:";
    cin>>n;
    cout<<"Enter array values:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        for(int i=0;i<n;i++){
            sum+=arr[i];
        avg=sum/n;
        }
        cout<<"the value of sum of arr is"<<" = "<<sum<<" and "<<" value of avg "<<" = "<<avg<<endl;
    return 0;
}