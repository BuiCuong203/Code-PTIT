for t in range(int(input())):
    n = int(input())
    x, y, z = [int(i) for i in input().split()]
    p = [0] * 101
    p[1] = x
    for i in range(2, n + 1):
        if i % 2 == 0:
            p[i] = min(p[i - 1] + x, p[i // 2] + z)
        else:
            p[i] = min(p[i - 1] + x, p[i // 2] + z + x, p[i // 2 + 1] + z + y)
    print(p[n])