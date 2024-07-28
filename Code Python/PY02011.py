n = int(input())
a = [int(i) for i in input().split()]
ans = 10 ** 18
k = 0
for i in range(n):
    cnt = 0
    for j in range(n):
        if i == j:
            continue
        else:
            cnt += abs(a[i] - a[j])
    if cnt < ans:
        ans = cnt
        k = a[i]
print(ans, k, sep = ' ')