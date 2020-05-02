/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/677/A
*/
#include <iostream>
using namespace std;
int main() {
    int n, h, width = 0 ;
    cin >> n >> h ;
    for (int i = 0 ; i < n ; i++){
        int p;
        cin >> p ;
        if (p > h){
            width += 2 ;
        } else {
            width += 1;
        }

    }
    cout << width;
    return 0;
}

