#include<iostream>
using namespace std;

void set_array_value(int array[]){
    array[2]=300;
}

int main(){


  int array[10]={10,20,30,40,50,60,70,80,90,100};
  
  set_array_value(array);

  for(int i=0; i<sizeof(array)/4; i++){
    cout<<array[i]<<" ";
  }


}