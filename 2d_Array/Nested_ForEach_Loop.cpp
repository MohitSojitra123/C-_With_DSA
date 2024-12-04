#include<iostream>
using namespace std;

int main(){
    int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};


   for(const auto& i : array){
    for(const auto& i2:i){
      cout<<i2<<' ';
    }
     cout<<endl;
   }

  

    
}