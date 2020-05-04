/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/contest/520/problem/A
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int freq[26];
int main() {

    int n ;
    cin >> n;
    string s ;
    cin >> s;
    if (n < 26){
        cout << "NO" << endl;
    } else {
        for (int i = 0, j = 0  ; i < 26 || j < n ; i++, j++){
            freq[toupper(s[j]) - 'A']++;
        }
        for (int i = 0 ; i < 26 ; i++){

            if (freq[i] == 0){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }


  return 0 ;
}
