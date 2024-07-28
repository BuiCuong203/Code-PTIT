import math
def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n) + 1)):
        if n % i == 0: return False
    return True

n = int(input())
lst = [int(i) for i in input().split()]
a = {}
for i in lst:
    if i in a and snt(i):
        a[i] += 1
    elif i not in a and snt(i):
        a[i] = 1
for i in a:
    print(str(i) + " " + str(a[i]))