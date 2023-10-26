#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int n,m; cin>>n>>m;
     int a[1000],b[100];
     for(int i=0; i<m; i++){
        cin>>a[i];
     }
     for(int i=0; i<n; i++){
        cin>>b[i];
     }
    int i=m-1;
    int j=n-1; 
    int k=m+n-1;
    while(i>=0 && j>=0){
        if(b[j]>a[i]){
            a[k]=b[j];
            k--;
            j--;
        }
        else {
            a[k]=a[i];
            k--;
            i--;
        }
    }
    while(j>=0){
        a[k]=b[j];
        k--;
        j--;
    }
    while(i>=0){
        a[k]=a[i];
        k--;
        i--;
    }
    // for(int i=0; i<m+n; i++){
    //     cout<<a[i]<<" ";
    // }
    sort(a,a+m+n);
     for(int k=0; k<m+n; k++){
        cout<<a[k]<<" ";
    }
    return 0;
}