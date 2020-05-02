/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/791/A
*/
#include <iostream>
using namespace std;
int main() {
    const int LIMAK_INCREASE = 3;
    const int BOB_INCREASE = 2;
    int limakWeight, bobWeight;
    cin >> limakWeight >> bobWeight;
    int years = 0 ;
    while (limakWeight <= bobWeight){
        years++;
        limakWeight *= LIMAK_INCREASE;
        bobWeight *= BOB_INCREASE;
    }

    cout << years << endl;
    return 0;
}

