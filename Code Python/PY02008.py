import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

n, x = (int(i) for i in input().split())
lst = [0, 2]
k = 3
while(len(lst) <= 1001):
    if snt(k):
        lst.append(k)
    k += 2
for i in range(n + 1):
    x += lst[i]
    print(x, end = ' ')