#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    /*1st Approach 
     TC=O(n^2)
    */
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]==0){
                swap(arr[i],arr[j]);
            }
        }
    }
     for(int i=0; i<n; i++) cout<<arr[i]<<' ';
    
    /*2nd Approach 
    TC=O(n)
    */
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }

    for(; j<n; j++){
        arr[j]=0;
    }
    for(int i=0; i<n; i++) cout<<arr[i]<<' ';
    return 0;
}