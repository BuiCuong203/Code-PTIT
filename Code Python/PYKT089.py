n = int(input())
c = []
l = []
b = []
cnt = 0
while True:
    if cnt == n:
        break
    a = [int(i) for i in input().split()]
    cnt += len(a)
    for i in range(len(a)):
        if a[i] % 2 == 0:
            c.append(a[i])
        else:
            l.append(a[i])
        b.append(a[i])
c.sort()
l.sort(key = lambda x: (-x))
q, p = 0, 0
for i in range(len(b)):
    if b[i] % 2 == 0:
        print(c[q], end = ' ')
        q += 1
    else:
        print(l[p], end = ' ')
        p += 1