#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements of an array: ";
    cin >> n;
    float array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element of an array " << endl;
        cin >> array[i];
    }
    float SD,mean,sqmean;
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    float sqsum=0;
    for(int i=0;i<n;i++){
        sqsum+=array[i]*array[i];
    }
    mean= sum/n;
    sqmean = sqsum/n;
    SD = sqrt(sqmean-(mean*mean));
    cout<<"Standard deviation: "<<SD;
    return 0;
}