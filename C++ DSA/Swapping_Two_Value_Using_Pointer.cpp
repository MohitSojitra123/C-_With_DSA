#include<iostream>
using namespace std;


void swapping_Value(int *a,int *b){

     int temp=*a;
     *a=*b;
     *b=temp;
}

int main(){
int a=10;
int b=20;

swapping_Value(&a,&b);

cout<<"Value Of a ==> "<<a<<endl;
cout<<"Value Of b ==> "<<b<<endl;
}



// Second Method....
// void Swapping_value_Using_Pointer(int*a,int*b){
//       int temp=*a;
//       *a=*b;
//       *b=temp;
// }

// int main(){
//     int a,b;

//     cout<<"Enter Value Of a..."<<endl;
//     cin>>a;
//     cout<<"Enter Value Of b..."<<endl;
//     cin>>b;

//     cout<<"Value Of a Is..."<<a<<endl;
//     cout<<"Value Of b Is..."<<b<<endl;

//     int* pa=&a;
//     int* pb=&b;

//     Swapping_value_Using_Pointer(pa,pb);

//     cout<<"Value Of a Is..."<<a<<endl;
//     cout<<"Value Of b Is..."<<b<<endl;

// }