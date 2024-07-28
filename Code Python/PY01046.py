def Try(n, a, b, c):
    if n == 1: print(a + " -> " + c)
    else:
        Try(n - 1, a, c, b)
        print(a + " -> " + c)
        Try(n - 1, b, a, c)

n = int(input())
Try(n, 'A', 'B', 'C')