import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
def check(s):
    l = sum(int(i) for i in s)
    if snt(l): return 'YES'
    else: return 'NO'

for t in range(int(input())):
    s = input()
    print(check(s))