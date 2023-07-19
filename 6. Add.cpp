#include <iostream>
using namespace std;
class Add_Complex
{
    private:
        float r, i;
    public:
        Add_Complex(): r(0), i(0) { }
        void input(){
           cout << "Real & imaginary parts respectively: ";
           cin >> r >> i;
        }
        Add_Complex operator + (Add_Complex c2){
           Add_Complex temp;
           temp.r = r + c2.r;
           temp.i = i + c2.i;
           return temp;
        }
        void sum(){
            cout << "\nSummation of two Complex number: " << r << " +" << i << "i" << endl;
        }
};
int main()
{
    Add_Complex c1, c2, r;
    cout << "Enter first complex number:\n";
    c1.input();
    cout << "\nEnter second complex number:\n";
    c2.input();
    r = c1 + c2;
    r.sum();
    return 0;
}
