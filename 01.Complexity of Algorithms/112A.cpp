/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/112/A
*/
#include <iostream>
using namespace std;
int main() {
    string s1,s2;
    cin >> s1 >> s2;
    for (int i = 0 ; i < s1.length() ; i++){
        char char1 = tolower(s1[i]);
        char char2 =  tolower(s2[i]);
        if(char1 < char2){
            cout << -1 << endl;
            return 0;
        }
        if(char2 < char1){
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

