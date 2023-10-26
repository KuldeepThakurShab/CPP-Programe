#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int row=1; row<=n; row++){
        for(int count=1; count<=row; count++){
            if(count==1 || count==row) cout<<row<<"\t";
            else cout<<0<<"\t";
        }
        cout<<'\n';
    }
    return 0;
}