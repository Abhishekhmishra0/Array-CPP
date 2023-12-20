#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    int arr[n];
    int N = n + 1;
    int summation = (N * (N + 1)) / 2;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Missing Element is: " << summation - sum;
    return 0;
}