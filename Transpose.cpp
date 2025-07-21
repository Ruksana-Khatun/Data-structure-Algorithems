#include <Iostream>
using namespace std;
int main(){
    cout<<"TranspoArray"<<endl;
    int m;
    cout<<"enter your row size  ="<<endl;
    cin>>m;
    int n;
    cout<<"enter your colum size  ="<<endl;
    cin>>n;
    cout<<"enter your array elements"<<endl;
    int arr[n][m];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        };
    }
    cout<<"Transpose of the array is"<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[j][i]<<" ";
        };
        cout<<endl;
    }
    // now i am gonna print array in transpose form
    cout<<"Transpose of the array is"<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[j][i]<<" ";
        };
        cout<<endl;
    };
    return 0;
}