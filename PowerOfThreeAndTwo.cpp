#include <iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
 bool check2(int n){
     if(n==0) return false;
    
    return  (ceil(log2(n)))==floor(log2(n));
}
bool check3(int n){
    if(n<=0) return false;
    if(n%3==0) return check3(n/3);
    if(n==1 ) return true;
    return false;
}
int main() {
      int n; cin>>n;
      bool two =check2(n);
      bool three =check3(n);
      if(two || three ){
          cout<<"true"<<endl;
      }
     else cout<<"false"<<endl;

     return 0;
}
/*
#include <iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
  
bool check3(int n){
    if(n<=0) return false;
   while(n!=1){
       if(n%3!=0){
           return false;
       }
       n=n/3;
   }
    return  true;
}  
int main() {
      int n; cin>>n;
     
      bool three =check3(n);
       if(three) cout<<"true";
       else cout<<"false";
     return 0;
}
*/