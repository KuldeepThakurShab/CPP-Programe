#include <iostream>

using namespace std;
bool  checkeven_odd(int n){
       if(n&1) return false;
       return true;
}
  
int main() {
    int n; cin>>n;
    if(checkeven_odd(n)) cout<<"Even";
    else cout<<"odd";
   return 0;
}
