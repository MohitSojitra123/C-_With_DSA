#include<iostream>
#include<deque>
using namespace std;

int main(){

  deque<int> de;
  
  de.push_back(100);
  de.push_front(10);
  de.push_back(200);
  de.push_back(300);


  for(int i:de){
    cout<<i<<" ";
  }
  cout<<endl;

//   de.pop_back();
//   de.pop_front();

cout<<"Front Element..."<<de.front()<<endl;
cout<<"Back Element..."<<de.back()<<endl;

cout<<"Return Index Element..."<<de.at(1)<<endl;

cout<<"Empty Deque..."<<de.empty()<<endl;

//   // Delete Element...
// de.erase(de.begin(),de.begin()+2);
//   for(int i:de){
//     cout<<i<<" ";
//   }
//   cout<<endl;


}