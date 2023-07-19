#include<iostream>
using namespace std;
class One
{
    int x;
public:
    One(int i)
    {
        x=i;
    }
    void show_x (void)
    {
        cout << "x= " << x << "\n";
    }
};
class Two
{
    int y;
public:
    Two(float j)
    {
        y=j;
    }
    void show_y (void)
    {
        cout << "y= " << y << "\n";
    }
};
class Three: public One, public Two
{
    int p,q;
public:
    Three (int a, float b, int c, int d): One (a), Two (b)
    {
        p=c;
        q=d;
    }
    void shown_pq (void)
    {
        cout << "p & q = " << p << " & " << q << "\n";
    }
};
int main()
{
    Three th(5, 10, 20, 30);
    th.show_x();
    th.show_y();
    th.shown_pq();
    return 0;
}
