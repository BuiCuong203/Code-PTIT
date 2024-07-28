for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    MIN = min(a)
    MAX = max(a)
    dem = 0
    k = [0] * (10 ** 3 + 1)
    for i in a:
        k[i] = 1
    for i in range(MIN, MAX + 1):
        if k[i] == 0: dem += 1
    print(dem)