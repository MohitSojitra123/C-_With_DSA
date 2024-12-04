#include<iostream>
#include<set>
using namespace std;

int main(){
        set<int> st;

        st.insert(3);
        st.insert(1);
        st.insert(3);
        st.insert(4);
        st.insert(6);
        st.insert(1);
        st.insert(5);
        st.insert(2);
        st.insert(0);
        st.insert(7);
        st.insert(5);

        for(int i:st){
            cout<<i<<" ";
        }cout<<endl;


        // Delete
        st.erase(st.begin());

        for(int i:st){
            cout<<i<<" ";
        }cout<<endl;
}