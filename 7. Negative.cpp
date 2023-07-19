#include <iostream>
using namespace std;
int main()
{
    int Array[50];
    int i, n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter elements in array: ";
    for(i=0; i<n; i++)
    {
        cin >> Array[i];
    }
    cout << "All negative elements in array are: ";
    for(i=0; i<n; i++)
    {
        if(Array[i] < 0)
        {
            cout << Array[i] << " ";
        }
    }
    return 0;
}
