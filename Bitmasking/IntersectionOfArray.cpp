#include <iostream>
using namespace std;
void printBinary(int num){
     for(int i=20; i>=0; i--){
          cout<<((num>>i)&1);
     }
     cout<<endl;
}
int main() {
    int n,m; cin>>n>>m;
    int a[100],b[100];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];
    int mask1=0 ;
    for(int i=0; i<n; i++){
        mask1=(mask1|(1<<a[i]));
    }
    cout<<mask1<<endl;
    printBinary(mask1);
    int mask2=0;
    for(int i=0; i<m; i++){
       mask2=(mask2|(1<<b[i]));
    }
    cout<<mask2<<endl;
    printBinary(mask2);
    int intersection=(mask1&mask2);
    int common_num=__builtin_popcount(intersection);
    cout<<common_num;
    return 0;
}
/*
input->> 
5 3
5 4 3 2 1
1 2 3
output->>
3 (1, 2, 3 are common )

*/