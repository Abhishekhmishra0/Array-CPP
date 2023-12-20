#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of an array ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int arr2[n];
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr2[count]=arr[i];
            count++;
        }
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            arr2[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    

    
    return 0;
}