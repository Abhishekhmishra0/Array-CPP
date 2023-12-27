#include <iostream>
using namespace std;
void intersection(int arr1[], int n, int arr2[], int p, int arr3[], int q)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < p && k < q)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}
int main()
{
    int n, p, q;
    cout << "Enter the size of first,second and third array resp: ";
    cin >> n >> p >> q;
    int arr1[n];
    int arr2[p];
    int arr3[q];
    cout << "Enter elements of first array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array ";
    for (int i = 0; i < p; i++)
    {
        cin >> arr2[i];
    }
    cout << "Enter elements of third array ";
    for (int i = 0; i < q; i++)
    {
        cin >> arr3[i];
    }
    intersection(arr1, n, arr2, p, arr3, q);
    return 0;
}