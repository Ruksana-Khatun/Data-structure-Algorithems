
#include <iostream>
using namespace std;

// int LinearSearch(int arr[], int n, int key) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {
//             return i; 
//         }
//     }
//     return -1; 
// }
int add(int a,int b){
    int c;
    c=a+b;
    return c;
    cout<<"after retun it should not exectue"<<endl;

}
struct Reactangulare{
    int length;
    int breadth;
};
void initilaze(struct Reactangulare *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}
int area(struct Reactangulare r) {
    return r.length * r.breadth;
}
void changeLength(struct Reactangulare *r, int l) {
    r->length = l;
}
int main(){
//     int arr[25]={1, 2, 3, 4, 5};
//     int len=sizeof(arr)/sizeof(int);
//   for(int i=0;i<len;i++){
//    cin>>arr[i];
   
//   }
//   for(int i=0;i<=len;i++){
//     cout<<arr[i]<<",";
//   }
//   cout<<endl;

// int array[]={114,15,16,8,90};
// int n=sizeof(arr)/sizeof(int);
// int max=array[0];
// int min=array[0];
// for(int i=0;i<=n;i++){
//     if(array[i]>max){
//         max=array[i];
//       if(array[i]<min){
//        min=array[i];
        
//     }
//     }

  

// }
// cout<<"max a value="<<max<<endl;
// cout<<"min a value="<<min<<endl;
//   int a=5;
//   int *ptr=&a;
//     cout<<"value of a="<<ptr<<endl;

// linear search

// int arr[]={1,2,3,4,5,6,7,8,9};
// int n=sizeof(arr)/sizeof(int);
// cout<<LinearSearch(arr, n, 9)<<endl;
    
//   return 0;
int x,y,z;
x=10;y=10;
cout<<add(x,y)<<endl;
struct Reactangulare r1;
initilaze(&r1, 10, 5);
area(r1);
cout << "Area of rectangle: " << area(r1) << endl;
changeLength(&r1, 20);

return 0;
    
}