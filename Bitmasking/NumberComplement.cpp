#include<iostream>
#include<cmath>
using namespace std;
int findComplement(int n){
    int num=n;
    int bit=0;
    //we have to calculate total number of bits in given number
    while(n){
        bit++;
        n=n>>1; //right shift  
    }
    
    int total_bit=bit;
    for(int i=0; i<total_bit; i++){
        int a=pow(2,i);
        num^=a;
    }
    return num;
}
int main(){
    int n; cin>>n;
    cout<<findComplement(n);
    return 0;
}
/*
Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
*/