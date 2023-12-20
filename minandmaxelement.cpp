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
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Maximum element is: "<<max<<endl<<"Minimum element is "<<min;
    
}