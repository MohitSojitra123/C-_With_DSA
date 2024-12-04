#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    // LILO

    st.push(100);
    st.push(200);
    st.push(300);

    cout<<"Top Element Of The Stack...."<<st.top()<<endl;

    st.pop();

    cout<<"Top Element Of The Stack After pop()...."<<st.top()<<endl;

    cout<<"Empty Or Not..."<<st.empty()<<endl;

}