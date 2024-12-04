#include<iostream>
#include<queue>
using namespace std;

int main(){

queue<int> qu;
// FIFO

qu.push(100);
qu.push(200);
qu.push(300);

cout<<"Frist Element..."<<qu.front()<<endl;
qu.pop();
cout<<"Frist Element after pop()..."<<qu.front()<<endl;


}