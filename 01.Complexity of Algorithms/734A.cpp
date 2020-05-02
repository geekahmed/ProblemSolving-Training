/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: http://codeforces.com/problemset/problem/734/A
*/
#include <iostream>
using namespace std;
int main() {
    int nGames;
    string games;
    cin >> nGames >> games;
    int countA = 0, countD = 0 ;
    for(int i = 0 ; i < games.length(); i++){
        if (games[i] == 'A'){
            countA++;
        } else {
            countD++;
        }
    }
    if (countA > countD){
        cout << "Anton" << endl;
    } else if (countD > countA){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    
    return 0;
}

