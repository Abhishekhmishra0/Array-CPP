#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of first array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of first array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a=0;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] != arr[j])
            {
                cout << "First non-repeating element is " << arr[j];
                a = 1;
            
            }
            if(a==1){
                break;
            }
        }
    }

    return 0;
}