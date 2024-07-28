n = int(input())
a = [[]] * n
sum_up = 0
sum_down = 0
for i in range(n):
    a[i] = [int(j) for j in input().split()]
for i in range(n):
    for j in range(n):
        if i < j:
            sum_up += a[i][j]
        if i > j:
            sum_down += a[i][j]
k = int(input())
sub = abs(sum_up - sum_down)
if sub <= k:
    print("YES")
else:
    print("NO")
print(sub)