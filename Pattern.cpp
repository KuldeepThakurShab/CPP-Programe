#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int r=1; r<=n; r++){
        for(int count=1; count<=r; count++){
            if(count==1 || count==r) cout<<r<<"\t";
            else cout<<0<<"\t";
        }
        cout<<endl;
    }
    return 0;

}