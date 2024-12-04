#include<iostream>
#include<queue>
using namespace std;

int main(){

// Max
  priority_queue<int> max;

// Min
  priority_queue<int,vector<int>,greater<int>> mini;

  
  max.push(100);
  max.push(200);
  max.push(300);
  max.push(400);

  int max_size=max.size();

  for(int i=0; i<max_size; i++){
    cout<<max.top()<<"  "; // Return Big Element 
    max.pop();  // Remove Big Element Then Next Time Find Another Big Element And Return...
  }cout<<endl;

 cout<<"-----------------------"<<endl; 
 cout<<"-----------------------"<<endl; 
 cout<<"-----------------------"<<endl; 

  mini.push(300);
  mini.push(200);
  mini.push(400);
  mini.push(100);

  int mini_size=mini.size();

  for(int i=0; i<mini_size; i++){
    cout<<mini.top()<<"  "; // Return Small Element 
    mini.pop();  // Remove Small Element Then Next Time Find Another Small Element And Return...
  }cout<<endl;

}