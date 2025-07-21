#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array= "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // output the elements of the array
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] >  max){
            max = arr[i];
        }
    }
    cout<<"The maximum element in the array is: "<<max<<endl;
    return 0;
}