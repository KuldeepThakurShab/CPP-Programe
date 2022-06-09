#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[10000];
    for(int i=0; i<n; i++) cin>>arr[i];
    int target; cin>>target;
    for (int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<i<<endl;
             return 0;
        }
        
    }
    cout<<-1<<endl;
    return 0;
}