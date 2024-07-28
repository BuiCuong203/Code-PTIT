n, m = [int(i) for i in input().split()]
a = [[0] * m] * n
MIN = 10005
MAX = -1
for i in range(n):
    a[i] = [int(j) for j in input().split()]
    for j in a[i]:
        if j < MIN:
            MIN = j
        if j > MAX:
            MAX = j
tmp = MAX - MIN
check = False
for i in range(n):
    for j in range(m):
        if a[i][j] == tmp:
            check = True
            break
if not check:
    print("NOT FOUND")
else:
    print(tmp)
    for i in range(n):
        for j in range(m):
            if tmp == a[i][j]:
                print("Vi tri [{}][{}]".format(i, j))