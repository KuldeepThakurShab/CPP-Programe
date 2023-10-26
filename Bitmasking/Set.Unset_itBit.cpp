#include<iostream>
using namespace std;
void printBinary(int n){
    for(int i=10; i>=0; i--){
         cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main(){
    int n; cin>>n;
    printBinary(n);
    //set ith bit;
     int i=2;
    printBinary(n|(1<<i));
    //unset the ith bit 
    printBinary(n&(~(1<<i)));
    return 0;
} 