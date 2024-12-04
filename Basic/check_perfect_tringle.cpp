#include<iostream>
using namespace std;

int main(){

   int a,b,c;
   cout<<"Enter Angle 1 : "<<endl;
   cin>>a;
   cout<<"Enter Angle 2 : "<<endl;
   cin>>b;
   cout<<"Enter Angle 3 : "<<endl;
   cin>>c;

    
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b) && (a+b+c==180)){
        cout<<"Perfect Tringle...";
    }else{
        cout<<"Not Perfect Tringle...";
    }

    int x=3,y,z;
    y=x=10;
    z=x<10;
    cout<<"x :"<<x<<"  "<<"z  :"<<z;

}