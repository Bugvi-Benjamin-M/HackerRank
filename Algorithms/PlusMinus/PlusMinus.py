import sys

if __name__ == '__main__':

    n = int(input())

    arr = list(map(int, input().split()))
    
    pos = 0
    neg = 0
    zero = 0
    for i in range(n):
        if(arr[i] == 0): 
            zero += 1
        elif(arr[i] > 0):
            pos += 1
        else:
            neg += 1
    
    print('%.6f'%(pos/n))
    print('%.6f'%(neg/n))
    print('%.6f'%(zero/n))