#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1;
     
    //  copy List 
    // list<int> l12(l1);

// Initialization
//    list<int> l2(10,500);

    l1.push_back(100);
    l1.push_back(200);
    l1.push_back(300);

    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

    l1.erase(l1.begin());

    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;

}