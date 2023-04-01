#include <iostream>
using namespace std;
class eod
{
    int n;

public:
    void input()
    {
        cin >> n;
    }
    void check()
    {
        if (n % 2 == 0)
        {
            cout << "number is even";
        }
        else
        {
            cout << "number is odd";
        }
    }
};
int main()
{
    eod c;
    c.input();
    c.check();
    return 0;
}