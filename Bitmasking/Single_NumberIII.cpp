#include<iostream>
#include<vector>
using namespace std;
vector<int> singleNumber(vector<int>&nums){
    int axb=0;
    for(auto num:nums){
        axb=axb^num;
    }
    int lowestBit=(axb & (-axb));
    vector<int>ans(2);
    for(auto num:nums){
        if((lowestBit & num)==0){
            ans[0]=ans[0]^num;
        }
        else ans[1]=ans[1]^num;
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
     vector<int>res=singleNumber(v);
     for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
     }
   return 0;
}
/*
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.
Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation:  [5, 3] is also a valid answer.
*/