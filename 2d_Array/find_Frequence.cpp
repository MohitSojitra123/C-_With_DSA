// 9. *Q9: Frequency of Elements in a 2D Array*
// Write steps to count the frequency of each element in a 2D array of size 4x4. If an element
// appears multiple times, display how many times it appears.
// *Example Input:*
// 
// 1 2 3 4
// 2 3 4 1
// 3 4 1 2
// 4 1 2 3
// 
// *Expected Output:*
// Frequency of 1: 4
// Frequency of 2: 4
// Frequency of 3: 4
// Frequency of 4: 4

#include <iostream>

using namespace std;

int main(){
    int n,m,count1=0,count2=0,count3=0,count4=0;
    cout<<"please enter the row size of array :";
    cin>>n;
    cout<<"please enter the col size of array :";
    cin>>m;
    int a[n][m];
    cout<<"enter elements b/w 1 to 4";
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
        switch (a[i][j])
        {
        case 1:
            count1=count1+1;
            break;
        case 2:
            count2++;
            break;
        case 3:
            count3++;
            break;
        case 4:
            count4++;
            break;
        
        default:
            break;
        }
        
        }
        
        
    }
    cout<<"frequency for 1 is :"<<count1<<endl;
    cout<<"frequency for 2 is :"<<count2<<endl;
    cout<<"frequency for 3 is :"<<count3<<endl;
    cout<<"frequency for 4 is :"<<count4<<endl;
}