import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
def check(s):
    if not snt(len(s)): return 'NO'
    dem_nt = 0
    for i in s:
        if snt(int(i)): dem_nt += 1
    if dem_nt <= len(s) - dem_nt: return 'NO'
    return 'YES'

for t in range(int(input())):
    s = input()
    print(check(s))