for t in range(int(input())):
    n = int(input())
    lst = [int(i) for i in input().split()]
    a, cnt, ans = {}, 1, lst[0]
    for i in lst:
        if i in a:
            a[i] += 1
            if a[i] > cnt:
                ans = i
                cnt = a[i]
        else:
            a[i] = 1
    if cnt * 2 > n:
        print(ans)
    else:
        print("NO")