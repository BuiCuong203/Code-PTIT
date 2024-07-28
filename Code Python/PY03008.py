n = int(input())
cnt = [0] * 100001
for t in range(n - 1):
    x, y = [int(i) for i in input().split()]
    cnt[x] += 1
    cnt[y] += 1
dem = 0
for i in range(1, n + 1):
    if cnt[i] > 1:
        dem += 1
if dem > 1:
    print('No')
else:
    print('Yes')