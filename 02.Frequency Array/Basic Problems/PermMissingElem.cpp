/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
*/
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
const int MAXINTEGER = 1000000 + 9;
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    short freqArr[MAXINTEGER];
    for (auto i = A.begin(); i != A.end(); ++i){
        freqArr[*i]++;
    }
    
     int freqLength = sizeof(freqArr) / sizeof(freqArr[0]);
    for (int i = 1; i < freqLength; i++){
        if (freqArr[i] == 0){
           return i;
        }
    }
    
    return A.size() + 1;
}
