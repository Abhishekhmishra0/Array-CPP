#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    float array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element of an array " << endl;
        cin >> array[i];
    }
    float max = array[0];
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout<<"Maximum element of the array is: "<<max;

}