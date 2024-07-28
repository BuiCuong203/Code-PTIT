n, m = [int(i) for i in input().split()]
a = [[]] * 51
for i in range(n):
    a[i] = [int(j) for j in input().split()]
if n > m:
    d = [0]
    while n > m + len(d):
        d.append(d[-1] + 2)
    for i in range(n):
        if not (i in d):
            for j in range(m):
                print(a[i][j], end = ' ')
            print()
if n < m:
    d = [1]
    while m > n + len(d):
        d.append(d[-1] + 2)
    for i in range(n):
        for j in range(m):
            if not (j in d):
                print(a[i][j], end = ' ')
        print()
if n == m:
    for i in range(n):
        for j in range(m):
            print(a[i][j], end = ' ')
        print() 