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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    int sum;
    cout << endl<<"Enter sum ";
    cin >> sum;
    int a=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                a=1;
                cout << "Indices are " << i << " and " << j << endl;
            }
        }
    }
    if(a==0){
        cout<<"No Sub Arrays Possible";
    }
    return 0;
}