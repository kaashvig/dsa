#include <iostream>
using namespace std;

 int firstocc(int arr[],int size,int key){
     int start = 0;
     int end = size-1;
     int mid = start + (end-start)/2;
     int ans =-1;
     while(start <= end){
         if(arr[mid] == key){
             ans = mid;
             end=mid-1;
         }
         else if (arr[mid] < key){
             start = mid+1;
         }
         else if (arr[mid] > key){
             end = mid-1;
         }
         mid = start +(end-start)/2;
     }
     return ans;
 }
#include <iostream>
using namespace std;

 int lastocc(int arr[],int size,int key){
     int start = 0;
     int end = size-1;
     int mid = start + (end-start)/2;
     int ans =-1;
     while(start <= end){
         if(arr[mid] == key){
             ans = mid;
             start=mid+1;
         }
         else if (arr[mid] < key){
             start = mid+1;
         }
         else if (arr[mid] > key){
             end = mid-1;
         }
         mid = start +(end-start)/2;
     }
     return ans;
 }

int main(){
    int even[5] = {1,2,3,3,5};
    cout<<"first occurence os 3 is at index "<<firstocc(even,5,3)<<endl;
    cout<<"last occurence os 3 is at index "<<lastocc(even,5,3)<<endl;
 return 0;   
}


