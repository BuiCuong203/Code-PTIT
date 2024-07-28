import math

def nt(n):
    if n < 2: return False
    for i in range(2,int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

for t in range(int(input())):
    n = int(input())
    k = 0
    for i in range(1,n):
        if math.gcd(n,i) == 1:
            k = k + 1
    if nt(k):
        print("YES")
    else:
        print("NO")