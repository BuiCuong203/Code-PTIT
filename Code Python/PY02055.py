import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0: return False
    return True

n, m = [int(i) for i in input().split()]
a = [[0] * m] * n
tmp = -1
for i in range(n):
    a[i] = [int(j) for j in input().split()]
    for j in a[i]:
        if snt(j) and j > tmp:
            tmp = j
if tmp == -1:
    print("NOT FOUND")
else:
    print(tmp)
    for i in range(n):
        for j in range(m):
            if tmp == a[i][j]:
                print("Vi tri [{}][{}]".format(i, j))