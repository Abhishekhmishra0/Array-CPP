#include<iostream>
using namespace std;
int main(){
    int n;
        cout<<"Enter number of elements in array: "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of array "<<endl;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"Your array is : "<<endl;
        for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
        }
        int ans =0;
        for(int i=0;i<n;i++){
            ans = ans^arr[i];
        }
        cout<<endl<<"Unique element is: "<<endl;
        cout<<ans;
        
    return 0;
}