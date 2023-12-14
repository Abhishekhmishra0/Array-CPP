#include<iostream>
void print(int arr[]){
    using namespace std;
    for(int i=0;i<7;i++){
        cout<<" "<<arr[i]<<" ";
    }
    
}
void sort(int arr[]){
    using namespace std;
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
        
    }
    
}
int main(){
    using namespace std;
    int arr[7];
    cout<<"Enter the elements of an array ";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    cout<<"Your array is: ";
    cout<<endl;
   
    print(arr);
     cout<<endl;
    cout<<"Your sorted array is: ";
    sort(arr);
    
    print(arr);
    
    return 0;
}