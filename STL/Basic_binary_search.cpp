#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

 
    cout<<"Search Item..."<<binary_search(v.begin(),v.end(),30)<<endl;

    // lower Bound
    cout<<"Lower Bound..."<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    // Upper Bound
    cout<<"Upper Bound..."<<upper_bound(v.begin(),v.end(),10)-v.begin()<<endl;
}