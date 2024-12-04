#include<iostream>
using namespace std;

int main(){

int size,roted_index;
cout<<"Enter Array Size...";
cin>>size;

int array[size];

for(int i=0; i<size; i++){
    cout<<"Enter Array Element...."<<i<<endl;
   cin>>array[i];
}

cout<<"Enter Index Number To Rotaed Value......";
cin>>roted_index;


int temp_array[size];

for(int i=roted_index; i<=size; i++){
    temp_array[i-roted_index]=array[i];
}


int tem_var=0;
int secod=size-roted_index;
for(int j=secod; j<size; j++){
    temp_array[j]=array[tem_var];
    tem_var++;
}

for(int i=0; i<size; i++){
    cout<<temp_array[i]<<endl;
}

}   