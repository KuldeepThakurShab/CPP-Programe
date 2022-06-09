#include<iostream>
using namespace std;

void pattern(int n){
    for(int r=1; r<=n; r++){
        for(int count=1; count<=r; count++){
            if(count==1 || count==r) cout<<r<<"\t";
            else cout<<0<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int n; cin>>n;
    pattern(n);
    return 0;

}