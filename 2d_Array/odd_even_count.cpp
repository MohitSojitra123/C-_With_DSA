// 4. **Q4: Counting Even and Odd Elements in a 2D Array**
// You are given a 3x3 matrix with random numbers. Write the steps to count how many even
// and odd numbers exist in the matrix.
// **Example Input:**
// ```
// 12 23 34
// 45 56 67
// 78 89 90
// ```
// **Expected Output:**
// Even numbers count: 5
// Odd numbers count: 4


#include <iostream>

using namespace std;

int main(){
     int n,m,even=0,odd=0;
    cout<<"please enter the row size of array :";
    cin>>n;
    cout<<"please enter the col size of array :";
    cin>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        cout<<"enter element "<<i<<" "<<j<<" : ";
        cin>>a[i][j];
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
        if (a[i][j]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        
        }
        
        
    }
    cout<<"there are "<<even<<" numbers"<<endl;
    cout<<"there are "<<odd<<" numbers"<<endl;
 
}