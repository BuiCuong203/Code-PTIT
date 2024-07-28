import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

n = int(input())
a = list(map(int, input().split()))
b = []
for i in a:
    if snt(i):
        b.append(i)
b.sort()
k = 0
for i in a:
    if snt(i):
        print(b[k], end = ' ')
        k += 1
    else:
        print(i, end = ' ')