import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

def sdx(n):
    return int(str(n)[::-1])

def check(n):
    if not snt(n): return 'No'
    if not snt(sum(int(i) for i in str(n))): return 'No'
    if not snt(sdx(n)): return 'No'
    for i in str(n):
        if not snt(int(i)): return 'No'
    return 'Yes'

for t in range(int(input())):
    n = int(input())
    print(check(n))