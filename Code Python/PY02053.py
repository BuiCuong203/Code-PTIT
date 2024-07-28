n = int(input())
a = [0] * n
for i in range(n):
    a[i] = [int(j) for j in input().split()]
k = int(input())
tren = 0
duoi = 0
for i in range(n):
    for j in range(n):
        if j < n - 1 - i:
            tren += a[i][j]
        elif j > n - 1 - i:
            duoi += a[i][j]
if abs(tren - duoi) <= k:
    print("YES")
else:
    print("NO")
print(abs(tren - duoi))