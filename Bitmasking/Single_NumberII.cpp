#include <iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>&nums){
    int ans=0;
    for(int i=0; i<32; i++){
        int mask=1<<i;  //left shift
        int count=0;
        for(auto num:nums){
            if(num&mask) //AND Operator
            count++;
        }
        if(count%3!=0){
            ans=ans|mask; //OR Operator 
        }
    }
    return ans;
}
int main() {
   int n; cin>>n;
   vector<int>v;
   for(int i=0; i<n; i++){
       int num; cin>>num;
       v.push_back(num);
   }
   cout<< singleNumber(v);
   return 0;
}
/*
   eg--?
   num      bits
   2        010
   2        010
   3        011
   2        010
        count=1   // yha par vertical 1 ko add kar rha hu
       count=4  
      count=0
*/
