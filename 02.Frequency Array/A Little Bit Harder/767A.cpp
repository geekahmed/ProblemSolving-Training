/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/contest/767/problem/A
*/
#include <iostream>
using namespace std;
short freqArr[100009];
int main() {
    int n;
    cin >> n;
    int var = n ;
    for (int i = 1 ; i <= n ; i++){
        int size ; cin >> size;
        freqArr[size] = 1;
        while (freqArr[var])
            cout << var-- << " " ;
        cout << '\n';
    }
  return 0 ;
}
