#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(19);
    v.push_back(20);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<",";
    };
    cout<<endl;
    

    cout<<v.size()<<endl;
    cout<<v[0]<<endl;
    for(int i=0;i<v.size();i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   int arr[3][3]=[{{1,2,314,},{15,151,15},{15,15,45}}];
   for(int i=0;i<3;i++){
    for(int i=0;i<3;i++){
        cout<<arr[i][i]<<",";
    };

   };
    cout<<endl;
}
