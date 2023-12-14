#include<iostream>
void arrrev(int arr[]){
    using namespace std;
    for(int i=0,j=4;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    using namespace std;
    int arr[5]   ;
    cout<<"Enter elements of array ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i]<<" ";
    }
    arrrev(arr);
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i]<<" ";
    }
    

    return 0;
}