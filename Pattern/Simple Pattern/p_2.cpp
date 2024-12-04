#include<iostream>
using namespace std;

// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

int main(){

for(int row=5; row>=1; row--){
    for(int col=row; col<=5; col++){
        cout<<col<<" ";
    }
        cout<<endl;
}

}