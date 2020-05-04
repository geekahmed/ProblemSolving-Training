/*
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: https://app.codility.com/programmers/lessons/4-counting_elements/perm_check/
*/
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
int Exists[100009];
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    long long N = A.size();
    for (auto i = A.begin(); i != A.end(); ++i){
        if (*i > N || *i < 1 || Exists[*i]){
            return 0;
        } else {
           Exists[*i] = 1;
        }
    }
    
    return 1;
}
