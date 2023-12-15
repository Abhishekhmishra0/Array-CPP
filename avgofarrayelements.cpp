#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    float array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element of an array " << endl;
        cin >> array[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    float Avg = sum / n;
    cout << "Average of elements of the array is: " << Avg;
    return 0;
}