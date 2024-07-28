import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def check(s):
    for i in range(len(s)):
        if (snt(i) and not snt(int(s[i]))) or (not snt(i) and snt(int(s[i]))):
            return 'NO'
    return 'YES'

for t in range(int(input())):
    s = input()
    print(check(s))