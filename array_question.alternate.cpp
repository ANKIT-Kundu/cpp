#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the length of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Insert the element in array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    int secondMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > secondMax && arr[i] != max)
            {
                secondMax = arr[i];
            }
        }
    
    cout << "Second largest element in array : " << secondMax;
    return 0;
}

/* another way to find the second largest element in array is firstly to
  found the max element and then apply the conditon to find second element

  if(arr[i]>secondMax && arr[i]=max){
    secondMax=array[i];
  }

code:-
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<" Enter the length of array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Insert the element in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int secondMax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
        for(int i=0;i<n;i++){
        if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
           }
        }

    cout<<"Second largest element in array : "<<secondMax;
    return 0;
}


*/

// Method-3 :- firstly sort an array and reduce the index value by 1 of max element
//  to found the second largest element