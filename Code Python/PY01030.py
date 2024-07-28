import math

n, k = (int(i) for i in input().split())
l = 10 ** (k - 1)
r = 10 ** (k) - 1
cnt = 0
for i in range(l, r + 1):
    if math.gcd(n,i) == 1:
        print(i, end = ' ')
        cnt +=1
    if cnt % 10 == 0:
        cnt = 0
        print()