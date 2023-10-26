#include<iostream>
#include<cmath>
using namespace std;
int XOR_profit(int a, int b){
      int axb=(a^b); //calculate a^b
      int mask=0; // to calculate no of bits in a^b
      while(axb>0){
        mask++;
        axb=axb>>1;
      }
      int ans=(pow(2,mask))-1;
      return ans;
}
int main(){
    int a,b; cin>>a>>b;
    cout<<XOR_profit(a,b);
    return 0;
}