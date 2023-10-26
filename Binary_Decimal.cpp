#include<iostream>
#include<cmath>
using namespace std;
int binary_decimal(int n){
    string s=to_string(n);
    int sum=0,count=0;
    for(int i=s.size()-1; i>=0; i--){
        sum=sum+(s[i]-'0')*pow(2,count);
        count++;
    }
    return sum;
}
int main(){
    int n; cin>>n;
     
    int num=binary_decimal(n);
    cout<<"Number is: "<<num;
    return 0;
}
/*
  int n; cin>>n;
    int sum=0;
    int r,i=0;
    while(n>0){
        r=n%10;
        sum=sum+r*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<sum;
*/