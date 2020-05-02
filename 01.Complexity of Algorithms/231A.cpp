/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/231/A
*/
#include <iostream>
using namespace std;
int main() {
    int n , finalRes = 0;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        int a, b, c ;
        cin >> a >> b >> c ;
        int ans = a + b + c ;
        if (ans >= 2){
            finalRes++;
        }
    }
    cout << finalRes << endl;
    return 0;
}

