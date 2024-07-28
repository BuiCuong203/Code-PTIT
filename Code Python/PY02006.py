def check(a, b):
    for i in range(len(a)):
        if a[i] > b[i]:
            return 'NO'
    return 'YES'

for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    a.sort()
    b.sort()
    print(check(a, b))
