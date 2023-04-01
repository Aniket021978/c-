#include<iostream>
using namespace std;
class add{
   public:
    int sum(int x,int y){
        return x+y;
    }
};
int main()
{
    int x,y,s;
    cin>>x>>y;
    add obj;
    obj.sum(x,y);
    cout<<obj.sum(x,y);
    return 0;
}