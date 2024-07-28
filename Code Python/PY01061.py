import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

for t in range(int(input())):
    s = input()
    if snt(int(s[:3])) and snt(int(s[-3:])):
        print("YES")
    else:
        print("NO")