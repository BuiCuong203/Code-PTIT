import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def check(s):
    if not snt(sum(int(i) for i in s)): return 'NO'
    for i in range(len(s)):
        if i % 2 == 0 and int(s[i]) % 2 != 0: return 'NO'
        if i % 2 == 1 and int(s[i]) % 2 == 0: return 'NO'
    return 'YES'

for t in range(int(input())):
    s = input()
    print(check(s))