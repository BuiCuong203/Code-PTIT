for t in range(int(input())):
    cur = 0
    v = []
    while cur < 2:
        l = list(map(int,input().split()))
        for i in l:
            v.append(i)
        cur += len(l)
    n, m = v[0], v[1]
    a = []
    tmp = []
    cnt = 0
    while cnt != n * m:
        l = [int(i) for i in input().split()]
        cnt += len(l)
        for i in l:
            tmp.append(i)
    ans = 0
    for i in range(n):
        c = []
        for j in range(m):
            c.append(tmp[ans])
            ans += 1
        a.append(c)
    b = []
    for i in range(m):
        x = []
        for j in range(n):
            x.append(a[j][i])
        b.append(x)
    for i in range(n):
        for j in range(n):
            s = 0
            for k in range(m):
                s += a[i][k] * b[k][j]
            print(s, end = ' ')
        print()