for t in range(int(input())):
    n, d = [int(i) for i in input().split()]
    a = [int(i) for i in input().split()]
    for i in range(d, n):
        print(a[i], end = ' ')
    for i in range(0, d):
        print(a[i], end = ' ')
    print()