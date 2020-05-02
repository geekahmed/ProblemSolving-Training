/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/263/A
*/
#include <iostream>
using namespace std;
int main() {
   int x ;
    for (int i = 0 ; i < 5 ; i++){
       for (int j = 0 ; j < 5 ; j++){
           cin >> x ;
           if (x == 1){
               int res = abs(i - 2) + abs(j - 2);
               cout << res;
               break;
           }
       }
    }
    return 0;
}

