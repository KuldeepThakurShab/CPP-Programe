#include<iostream>
#include<cstring>
using namespace std;
int main() {
     int n; cin>>n;
     string s=to_string(n);
     int i=0,j=s.length()-1;
     swap(s[i],s[j]);
     int a=stoi(s);
     cout<<a;
     
    return 0;
}