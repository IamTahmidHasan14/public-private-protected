#include <iostream>
using namespace std;
class Myclass
{
public:
    int x;
    int arr[5];
    void func_1()
    {
        cin >> x;
    }
    void func_2()
    {
        for(int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
};
class Sub_1: public Myclass
{
public:
    int strNum()
    {
        int strn = 0;
        int a = x;
        while(a > 0)
        {
            int fac = 1;
            int y = a % 10;
            for(int i = 1; i <= y; i++)
            {
                fac *= i;
            }
            strn += fac;
            a /= 10;
        }
        return x == strn ? 1 : 0;
    }
};
class Sub_2: public Myclass
{
public:
    int mulArr()
    {
        int d = 1;
        for(int i = 0; i < 5; i++)
        {
            d *= arr[i];
        }
        return d;
    }
};
int main()
{
    Sub_1 s1;
    Sub_2 s2;
    s1.func_1();
    cout << s1.strNum() << endl << endl;
    s2.func_2();
    cout << s2.mulArr() << endl;
}
