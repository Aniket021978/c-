#include <iostream>
using namespace std;
class rc
{
    int a, b, c;
    friend rc recom(rc o, rc o1);

public:
    void setnumber(int n, int n1, int n2)
    {
        a = n;
        b = n1;
        c = n2;
    }
    void printnumber()
    {
        cout << "the add of " << a << " , " << b << " , " << c << endl;
    }
};
rc recom(rc o, rc o1)
{
    rc o2;
    o2.setnumber((o.a + o1.a), (o.b + o1.b), (o.c + o1.c));
    return o2;
}

int main()
{
    rc o, o1, r;
    o.setnumber(1, 5, 4);
    o1.setnumber(2, 6, 6);
    o.printnumber();
    o1.printnumber();
    r = recom(o, o1);
    r.printnumber();
    return 0;
}
