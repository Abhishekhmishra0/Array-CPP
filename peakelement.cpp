#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Peak elements are " << endl;
    for (int i = 1, j = 0; i < n - 1, j < n - 2; i++, j++)
    {
        if (arr[i] > arr[j] && arr[i] > arr[j + 2])
        {
            cout << arr[i] << endl;
            ;
        }
    }

    return 0;
}