for t in range(int(input())):
    n, m, l = (int(i) for i in input().split())
    a = [0] * n
    for i in range(n):
        a[i] = [int(j) for j in input().split()]
    k = l ** 2
    top = 0
    down = l - 1
    left = 0
    right = l - 1
    while(True):
        for i in range(top, down + 1):
            for j in range(left, right + 1):