#include<iostream>
using namespace std;

const int a=3;
const int b=3;


void show_array_data(int array[a][b]){
      for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
           cout<<array[i][j]<<" ";
        }
        cout<<endl;
      }
}


int main(){

  int array[a][b];   

for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
        cout<<"Enter Array Element...";
        cin>>array[i][j];
    }
}

show_array_data(array);


}