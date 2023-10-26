#include <iostream>

using namespace std;
void binary(int n){
for(int i=10; i>=0; i--){
    //  cout<<((n>>i)&1);
        int k=n>>i;
        if(k&1) cout<<"1";
        else cout<<"0";
    }
    cout<<endl;
}
  
int main() {
    int n; cin>>n;
  for(int i=0; i<=n; i++){
      binary(i);
  }
   return 0;
}
