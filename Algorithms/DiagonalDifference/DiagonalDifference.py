import math
import sys

if __name__ == "__main__":

    n = int(input())

    diag1Sum = 0
    diag2Sum = 0
    for i in range(n):
        row = list(map(int,input().split()))
        for j in range(n):
            if(i == j):
                diag1Sum += row[j]
                diag2Sum += row[n-1-j]
    print(abs(diag1Sum - diag2Sum))


