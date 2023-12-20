#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate elements are/is: ";
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
        }
    }

    return 0;
}