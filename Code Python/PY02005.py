n = int(input())
lst = [int(i) for i in input().split()]
cnt = 0
for i in range(n - 1):
    for j in range(i + 1, n):
        if lst[i] > lst[j]:
            cnt += 1
print(cnt)