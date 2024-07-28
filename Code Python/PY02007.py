dd = [0] * 42
cnt, k = 0, 10
while k != 0:
    a = [int(i) for i in input().split()]
    k -= len(a)
    for i in a:
        if dd[i % 42] == 0:
            dd[i % 42] = 1
            cnt += 1
print(cnt)