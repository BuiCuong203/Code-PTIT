import math

def tn(n):
    s = str(n)
    if len(s) < 2: return False
    return s == s[::-1]

n, m = [int(i) for i in input().split()]
a = [[0] * m] * n
tmp = -1
for i in range(n):
    a[i] = [int(j) for j in input().split()]
    for j in a[i]:
        if tn(j) and j > tmp:
            tmp = j
if tmp == -1:
    print("NOT FOUND")
else:
    print(tmp)
    for i in range(n):
        for j in range(m):
            if tmp == a[i][j]:
                print("Vi tri [{}][{}]".format(i, j))