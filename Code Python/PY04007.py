for t in range(int(input())):
    n, m = [int(i) for i in input().split()]
    a = [[0] * m] * n
    for i in range(n):
        a[i] = [int(x) for x in input().split()]
    b = []
    for i in range(m) :
        x = []
        for j in range(n) :
            x.append(a[j][i])
        b.append(x)
    for i in range(n):
        for j in range(n):
            s = 0
            for k in range(m):
                s += a[i][k] * b[k][j]
            print(s, end = ' ')
        print()