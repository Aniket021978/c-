#include<iostream>
using namespace std;
int main()
{
    string l[2][2][2]={{{"2","4"},{"5","6"}},{{"3","5"},{"8","9"}}};
    for(int i=0; i<2; i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
            cout<<l[i][j][k]<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}