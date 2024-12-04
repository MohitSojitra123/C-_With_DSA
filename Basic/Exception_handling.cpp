#include<iostream>
using namespace std;

int main(){

   cout<<"Start"<<endl;

    int a=10;
    int b=0;

    try{
      throw b;  
      cout<<a/b;
    }catch(int x){
        cout<<"Can Not Divided By..."<<x;
        cout<<endl;
    }

   cout<<"End"<<endl;


}