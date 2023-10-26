#include<bits/stdc++.h>
using namespace std;
int main() {
     int n; cin>>n;
     vector<int>v;
     int num;
     for(int i=0; i<n; i++){
        cin>>num;
        v.push_back(num);
     }
     for(int i=0; i<n; i++) v[i]=abs(v[i]);
     sort(v.begin(),v.end());
     for(int i=0; i<n; i++) v[i]=v[i]*v[i];
     for(int i=0; i<n; i++) cout<<v[i]<<" ";
    return 0;
}