#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    int arr[n];
    int K;
    cout<<"Enter K: ";
    cin>>K;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == K)
            {
                count++;
            }
        }
    }
    cout << "Number of pairs with sum " << K << " is: " << count;
    return 0;
}