#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[100];
    for(int i=0; i<n; i++) cin>>arr[i];
        int x=arr[0];
        for(int i=1; i<n; i++){
            x^=arr[i];
           
        }
     int x2=1;
     for(int i=2; i<=n+1; i++){
        x2=x2^i;
     }
      cout<<(x^x2)<<endl;
    return 0;
}