#include <iostream>
using namespace std;
class y;
class x
{
    int a;
    friend void show(x &, y &);

public:
    void one(int salary)
    {
        a = salary;
    }
    void disp(void)
    {
        cout << a;
    }
};
class y
{
    int b;
    friend void show(x &, y &);

public:
    void two(int salary)
    {
        b = salary;
    }
    void disp(void)
    {
        cout << b;
    }
};
void show(x &c, y &d)
{
    int temp = c.a;
    c.a = d.b;
    d.b = temp;
}
int main()
{
    x o;
    y o1;
    o.one(5);
    o1.two(6);
    show(o, o1);
    cout << " " << endl;
    o.disp();
    cout << " " << endl;
    o1.disp();
    return 0;
}