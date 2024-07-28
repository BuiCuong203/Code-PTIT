for t in range(int(input())):
    a, cnt = {}, 0
    n = int(input())
    for i in range(n):
        x = int(input())
        if x in a:
            a[x] += 1
        else:
            a[x] = 1
        cnt = max(cnt, a[x])
    ans = 1000
    for i in a:
        if a[i] == cnt:
            ans = min(ans, i)
    print(ans)
