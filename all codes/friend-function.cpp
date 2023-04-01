#include <iostream>
using namespace std;
class rc;
class calculator
{
public:
    int addnumber(int a, int b)
    {
        return (a + b);
    }
    int recom(rc, rc);
    int reco(rc, rc);
};
class rc
{
    int a, b;
    friend int calculator ::recom(rc, rc);
    friend int calculator ::reco(rc, rc);

public:
    void setnumber(int n, int n1)
    {
        a = n;
        b = n1;
    }
};
int calculator ::recom(rc o, rc o1)
{
    return (o.a + o1.a);
}
int calculator ::reco(rc o, rc o1)
{
    return (o.b + o1.b);
}
int main()
{
    rc o, o1;
    o.setnumber(1, 5);
    o1.setnumber(2, 6);
    calculator c;
    int r = c.recom(o, o1);
    cout << "the number is " << r << endl;
    int res = c.reco(o, o1);
    cout << "the number is " << res << endl;
    return 0;
}