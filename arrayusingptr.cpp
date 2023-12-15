#include <iostream>
using namespace std;
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element number " << i + 1<<":  ";
        cin >> array[i];
    }
    int *ptr = array;
    for (int i = 0; i < 5; i++)
    {
        cout << "Your array element number " << i + 1 << " is " << *ptr<<endl;
        ptr++;
    }
    return 0;
}