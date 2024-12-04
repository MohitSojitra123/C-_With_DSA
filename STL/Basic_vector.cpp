#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<int> v;

//    vector<int> a(5,1);
//    5 is Size
//    1 Initialization all Element in 1 
// for(int i:a){
//     cout<<i<<endl;
// }

//   Check Capacity.....
   v.push_back(10);
   cout<<v.capacity()<<endl;

   v.push_back(20);
   cout<<v.capacity()<<endl;
   
   v.push_back(30);
   cout<<v.capacity()<<endl;
 
   v.push_back(40);
   cout<<v.capacity()<<endl;
 
   v.push_back(50);
   cout<<v.capacity()<<endl;
//   Check Capacity.....


// Check Size....
cout<<v.size()<<endl;


// Return Index Value...
cout<<v.at(3)<<endl;


// // Delete Last Element...
// v.pop_back();
// for(int i:v){
//     cout<<i<<endl;
// }

cout<<"Before Clear..."<<v.size()<<endl;
v.clear();
cout<<"After Clear..."<<v.size()<<endl;




   

}