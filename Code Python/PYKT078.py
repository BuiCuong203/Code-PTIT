for t in range(int(input())):
    n, m = list(map(int, input().split()))
    a = [int(i) for i in input().split()]
    k = max(a)
    for i in range(len(a)):
        if a[i] == k:
            a.insert(i, m)
            break
    b = []
    c = []
    for i in range(len(a)):
        if a[i] < 0: b.append(a[i])
        else: c.append(a[i])
    for i in b:
        print(i, end = ' ')
    for i in c:
        print(i, end = ' ')
    print()