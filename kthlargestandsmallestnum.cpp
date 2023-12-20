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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    int k;
    cout<<"Enter k: ";
    cin>>k;
    cout<<k<<" th largerst element is "<<arr[n-k]<<endl;
    cout<<k<<" th smallest element is "<<arr[k-1]<<endl;

    return 0;
}