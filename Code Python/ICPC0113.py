import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

def sdx(n):
    return int(str(n)[::-1])

for t in range(int(input())):
    a = []
    n = int(input())
    for i in range(n):
        if snt(i) and snt(sdx(i)) and i != sdx(i) and (i and sdx(i)) not in a and sdx(i) < n:
            print(i, sdx(i), end = ' ')
            a += [i, sdx(i)]
    print()