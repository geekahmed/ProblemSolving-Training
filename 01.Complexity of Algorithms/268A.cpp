/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/268/A
*/
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n ;
    cin >> n ;
    int home[n];
    int guest[n];
    for (int i = 0 ; i < n ; i++){
        cin >> home[i] >> guest[i];
    }
    int res = 0 ;
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ;j++){
            if (home[i] == guest[j]){
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}

