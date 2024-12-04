#include<iostream>
using namespace std;

// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

int main(){

for(int row=5; row>=1; row--){
    for(int col=row; col<=5; col++){
        cout<<row<<" ";
    }
        cout<<endl;
}


}