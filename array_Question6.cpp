// Given Q queries ,check if the given number is present in the array or not 
// Note: value of all element  in the array is less than 10 to the power 5


#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
     
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
     }

    const int N= 1e5+10;
    vector<int> freq(N,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    int q;
    cout<<"Enter the number of queries : ";
    cin>>q;
    while(q--){
    int queryElement;
    cout<<"Enter the query Element : ";
    cin>>queryElement;
    cout<<" QueryElement is present "<<freq[queryElement]<<" times "<<endl;
    }
    return 0;
}

