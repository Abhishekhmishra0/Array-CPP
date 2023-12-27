#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements of an aaray ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];    
    }
    
    for(int i=0;i<n;i++){
        int a=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                a=1;
            }
        }
        if(a==0){
            cout<<"unique element is "<<arr[i]<<" ";
        }
    }
    
    
    return 0;
}