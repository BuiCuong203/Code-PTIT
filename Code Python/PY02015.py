while(True):
    lst = [int(i) for i in input().split()]
    if lst.count(0) == 4:
        break
    cnt = 0
    while(lst.count(lst[0]) != 4):
        tmp = lst.copy()
        for i in range(4):
            lst[i] = abs(tmp[i] - tmp[(i + 1) % 4])
        cnt += 1
    print(cnt)