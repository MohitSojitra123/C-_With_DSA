#include<iostream>
#include<map>
using namespace std;


int main(){

  map <int,string> m;

  m[1]="Babber";
  m[2]="kumar";
  m[3]="love";
    
  m.insert({4,"Bheem"});  

  for(auto i : m){
    cout<<i.first<<"  "<<i.second<<endl;
  }

//   Check Element IS Prsernt...

cout<<"Find And Search ==> "<<m.count(27)<<endl;

// m.erase(2);

}