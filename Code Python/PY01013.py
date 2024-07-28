import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)+1)):
        if n % i == 0: return False
    return True

for i in range(int(input())):
    a, b = list(int(i) for i in input().split(" "))
    if snt(sum(int(i) for i in str(math.gcd(a,b)))):
        print("YES")
    else:
        print("NO")