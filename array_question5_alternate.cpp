//rotate the given array 'a' by k steps, where k is non-negative .
//Note : k can be greater than n as well where n is size of array 'a'


// using vector concept
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v={1,2,3,4,5,6};
int k=2; 
k=k%v.size();                       // taking two rotation 
reverse(v.begin(),v.end());
(v.begin(),v.begin()+k);
(v.begin()+k,v.end());
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 return 0 ;

}