// To find the largest element in array 
#include<iostream>
using namespace std;
 
 int Index(int  array[], int size){
    int max=0;
    int index;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            index=i;
        }
    }
    return index;
 }
 int main(){
    int n;
    cout<<" Enter the number of elements in array : ";
    cin>>n;
     int arr[n];
     cout<<"Insert the  elements in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int MaximumElement=Index(arr,n);

    arr[MaximumElement]=-1;
    
    int secondMaximum=Index(arr,n);
     cout<<"Second maximum element in array : "<<arr[secondMaximum];
     return 0;
 }