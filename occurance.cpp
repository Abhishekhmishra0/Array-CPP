#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of an array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count =0;
    int n1;
    cout<<"Enter the integer ";
    cin>>n1;

    for(int i=0;i<n;i++){
        if(arr[i]==n1){
            count++;
        }
    }
    cout<<"Occurance of "<<n1<<" in the array is "<<count;
    return 0;
}