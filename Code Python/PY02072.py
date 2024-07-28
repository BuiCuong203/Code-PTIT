n = int(input())
a = list(map(int, input().split()))
k = max(a)
res, ans = 0, 0
for i in a :
    if i == k :
        res += 1
    else :
        ans = max(ans, res)
        res = 0
ans = max(ans, res)
print(ans)