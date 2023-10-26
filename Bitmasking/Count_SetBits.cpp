#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int count=0;
    /*
     while(n){
       if(n&1) count++;
        n=n>>1;
    }
    */
    while(n){
       int r=n%2;
       if(r==1) count++;
       n=n/2;
    }
    cout<<count;
    return 0;
}
/*
//Note :-->> inbuilt function to count set bit is----> __builtin_popcount(n);
int mask=1;
int set_bit=0;
for(int i=1; i<=31; i++){
    if((n&mask)>0) set_bit++;
    mask=mask*2;  //work as left shift
}
//or we can use left shift operator
 for(int i=0; i<32; i++){
       if(n&mask==1) set_bit++;
       mask=mask<<1; //left shift
    }
cout<<set_bit;
*/