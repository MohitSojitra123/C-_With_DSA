#include<iostream>
using namespace std;

bool isPrime (int n) {
   for (int i = 2; i < n; i++) {
      if (n%i == 0) {
         return false;
      }
   }
   return true;
}

int main(){
   int start,end,count=1;
   cout<<"Enter Starting Number..."<<endl;
   cin>>start;
   cout<<"Enter Ending Number..."<<endl;
   cin>>end;
   for (int i = start; i <= end; i++) {
      if (isPrime(i)) {
         cout << i << '\n';
      }
   }
   return 0;
}