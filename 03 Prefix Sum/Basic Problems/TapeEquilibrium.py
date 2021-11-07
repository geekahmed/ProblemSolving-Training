"""
E-mail: geekahmed1@gmail.com
LinkedIn: https://www.linkedin.com/in/geekahmed/
Problem-Link: https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
"""

def solution(A):
    # write your code in Python 3.6
    for i in range(1, len(A)):
        A[i] += A[i-1]
    x = float('inf')
    for i in range(len(A) - 1):
        res = abs(A[i] - (A[len(A) - 1] - A[i]))
        x = min(res, x)
    return x