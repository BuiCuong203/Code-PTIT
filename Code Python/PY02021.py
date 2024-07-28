for t in range(int(input())):
    n, m, k = [int(i) for i in input().split()]
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    c = [int(i) for i in input().split()]
    i, j, q = 0, 0, 0
    check = False
    while i < n and j < m and q < k:
        if a[i] == b[j] and b[j] == c[q]:
            check = True
            print(a[i], end = ' ')
            i += 1
            j += 1
            q += 1
        elif a[i] < b[j]:
            i += 1
        elif b[j] < c[q]:
            j += 1
        elif c[q] < a[i]:
            q += 1
    if check:
        print()
    else:
        print("NO")