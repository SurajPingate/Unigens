#include <iostream>
using namespace std;
int Small(int arr[], int n){
  arr[0];
  int temp;
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
int main() {
   int n=10;
   int arr[n-1];
   cout<<"Enter array elements: ";
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int smallest=Small(arr, n);
   cout<<"Smallest Element is: "<<smallest;
   return 0;
}
