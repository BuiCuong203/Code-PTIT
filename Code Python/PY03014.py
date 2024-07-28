for t in range(int(input())):
    s = input()
    a = []
    cnt = 0
    for i in s:
        if i == '(':
            cnt += 1
            a.append(cnt)
            print(a[-1], end = ' ')
        if i == ')':
            print(a[-1], end = ' ')
            a.pop()
    print()
