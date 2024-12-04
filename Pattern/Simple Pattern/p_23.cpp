#include<bits/stdc++.h>
using namespace std;

int main () {
    int n = 6; 
    for (int i = 0; i < n; i++) {
        int first = i + 1, second = 2*n - i;
        for (int j = 0; j < n; j++) {
            if (j%2 == 0) {
                cout << first << " ";
                first += 10;
            } else {
                cout << second << " ";
                second += 10;    
            }
        }
        cout << "\n";
    }
}