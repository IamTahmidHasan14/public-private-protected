#include<iostream>
using namespace std;
class A
{
protected:
    int p;
public:
    void set_p()
    {
        int n;
        cout << "p: ";
        cin >> n;
        p = n;
    }
};
class B: protected A{
public:
    int q;
    void set_q()
    {
        cout << "q: ";
        cin >> q;
    }
    void sum()
    {
        set_p();
        cout << "Summation of p and q = " << p+q << endl;
    }
};
int main()
{
    B th;
    th.set_q();
    th.sum();
    return 0;
}
