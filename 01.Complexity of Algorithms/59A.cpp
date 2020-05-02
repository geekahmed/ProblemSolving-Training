/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/59/A
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    string s;
    cin >> s;
    int countLower = 0 , countUpper = 0 ;
    for (int i = 0 ; i < s.length() ; i++) {
        if (islower(s[i])){
            countLower++;
        }
        if(isupper(s[i])){
            countUpper++;
        }
    }
    if (countLower > countUpper){
        // Convert To Lower
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    } else if (countUpper > countLower){
        // Convert To Upper
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        // Convert To Lower
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    }
    cout << s << endl;
    return 0;
}

