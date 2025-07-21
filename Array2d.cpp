#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"2D Array"<<endl;
    int m;
    cout<<"enter your colum size  ="<<endl;
    cin>>m;
    int p;
    cout<<"enter your row size  ="<<endl;
    cin>>p;
    cout<<"enter your array elements"<<endl;
    int arr[p][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            cin>>arr[i][j];
        };
   
    };
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            sum += arr[i][j];
            
        };
        
    };
     cout << "sum element = " << sum << endl;
    return 0;
    


}






