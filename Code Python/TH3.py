n = int(input())
a = [int(i) for i in input().split()]
a.sort()
MAX = max(a[-1] * a[-2], a[-1] * a[-2] * a[-3], a[0] * a[1], a[0] * a[1] * a[-1])
print(MAX)