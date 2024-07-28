from math import *

a, k, n = list(int(i) for i in input().split(" "))
res = False
for i in range(1, int((n + a) / k) + 1):
    if i * k  - a <= n - a and i * k - a > 0:
        res = True
        print(i * k - a, end = ' ')
if not res: print(-1)