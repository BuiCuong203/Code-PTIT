for t in range(int(input())):
    s = input()
    s1 = input()
    cnt = 0
    i = 0
    while i < len(s):
        if s.find(s1, i, i + len(s1)) != -1:
            cnt += 1
            i += len(s1)
        else: i += 1
    print(cnt)