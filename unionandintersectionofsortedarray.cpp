#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    int arr1[n];
    int arr2[n];
    cout << "Enter elements of arr1 " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements of arr2 " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    sort(arr1, n);
    sort(arr2, n);
    int count = 0;
    int unionarr[2 * n];
    int intersection[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersection[count] = arr1[i];
                count++;
            }
        }
    }
    cout << "intersection of two arrays are:  " << endl;
    for (int i = 0; i < count; i++)
    {
        cout << intersection[i] << "  ";
    }
    for (int i = 0; i < n; i++)
    {
        unionarr[i] = arr1[i];
    }
    int j = n;

    cout << endl
         << "Union of two arrays are " << endl;
    for (int i = 0; i < j; i++)
    {
        cout << unionarr[i] << "  ";
    }

    return 0;
}