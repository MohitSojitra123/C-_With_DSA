#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter Value Of Day...";
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuseday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
       cout<<"Sunday";
    default:
       cout<<"Enter Valid Option...";
        break;
    }
}