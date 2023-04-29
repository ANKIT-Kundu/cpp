//rotate the given array 'a' by k steps, where k is non-negative .
//Note : k can be greater than n as well where n is size of array 'a'

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    int a[n];
    cout<<"Insert the elements in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the number of rotation : ";
    cin>>k;   // where k is number of rotation 
    if(k>=n){
        k=k%n;
    }
    int ansarr[n];
    int j=0;
    for(int i=n-k;i<n;i++){
        ansarr[j++]=a[i];
    }
    for(int i=0;i<n-k;i++){
        ansarr[j++]=a[i];
    }
    cout<<"Array after the rotation : "<<endl;
    for(int i=0;i<=n;i++){
        cout<<ansarr[i]<<" ";
    }
return 0;
}