#include<iostream>
using namespace std;

int main(){

    int size=10;
    int array[size]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;  i<size; i++){
        cout<<array[i]<<endl;
    }
    cout<<"-----------------"<<endl;
    size--;
    for(int i=0;  i<size; i++){
        cout<<array[i]<<endl;
    }
}