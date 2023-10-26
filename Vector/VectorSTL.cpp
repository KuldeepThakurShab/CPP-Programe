#include<iostream>
#include<vector>
using namespace std;
int main(){
    //syntax->> vector<datatype>vector name;
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"Vector size is: "<<v.size()<<endl;
    cout<<"Vector capacity is: "<<v.capacity()<<endl;
    cout<<"Maximum size of vector is: "<<v.max_size()<<endl;
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    if(v.empty()==false) cout<<"vector is not empty "<<endl;
    else cout<<" vector is empty "<<endl;
    cout<<"Front element of vector is: "<<v.front()<<endl;
    cout<<"Back element of vector is: "<<v.back()<<endl;
    v.pop_back();   //to remove last element
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
    v.insert(v.begin(),8);  //insert element at front
    v.insert(v.begin()+2,12);  //insert element at postion 2nd from front
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;

    vector<int>v1(10);   //v1 size will be 10 and they will get intilized with zero
    for(int i=0; i<10; i++) cout<<v1[i]<<" ";
    cout<<endl;
    return 0;
}