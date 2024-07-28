import math
def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

for t in range(int(input())):
    n = int(input())
    res = 0
    for i in range(n - 5):
        if snt(i) and snt(i + 6):
            if snt(i + 2) or snt(i + 4):
                res += 1
    print(res)