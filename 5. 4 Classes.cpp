#include<iostream>
using namespace std;
class Nabi
{
protected:
    int x;
public:
    int i;
    Nabi()
    {
        x=10;
        i=x;
    }
};
class Hafiz: virtual public Nabi
{
protected:
    int y;
public:
    int j;
    Hafiz()
{
    y=20;
    j=y;
}
};
class Shafiq: virtual public Nabi
{
protected:
    int z;
public:
    int k;
    Shafiq()
{
    z=30;
    k=z;
}
};
class Biddut: public Shafiq, public Hafiz
{
protected:
    int a;
public:
    Biddut()
    {
        a=40;
    }
    int add()
    {
        Nabi l;
        return (a+j+k+l.i);
    }
};
int main()
{
    int result;
    Biddut tahmid;
    result = tahmid.add();
    cout << "Sum = " << result << endl;
    return 0;
}
