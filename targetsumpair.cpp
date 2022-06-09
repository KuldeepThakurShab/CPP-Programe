#include<iostream>
using namespace std;
int main(){

    int n; cin>>n;
    int arr[10000];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target ; cin>>target;
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
              if (arr[i]+arr[j]==target){
               cout<<arr[i]<<" and "<<arr[j]<<endl;
              }
        }
    }

    return 0;

}