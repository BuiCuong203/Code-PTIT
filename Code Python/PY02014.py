import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

n = int(input())
a = [int(i) for i in input().split()]
b = []
for i in a:
    tmp1, tmp2 = i, i
    while not snt(tmp1):
        tmp1 += 1
    while not snt(tmp2):
        tmp2 -= 1
    tmp = min(tmp1 - i, i - tmp2)
    b.append(tmp)
print(max(b))