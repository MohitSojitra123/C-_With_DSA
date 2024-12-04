#include<iostream>
using namespace std;

// 1 2 3 4 5
// 2 3 4 5 
// 3 4 5 
// 4 5
// 5
int main(){

for(int col=1; col<=5; col++){
    for(int row=col;  row<=5; row++){
        cout<<row<<" ";
    }
     cout<<endl;
}

}