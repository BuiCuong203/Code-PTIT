for t in range(int(input())):
    s = list(int(i) for i in input())
    for i in range(len(s) - 1, 0, -1):
        if s[i] >= 5:
            s[i-1] = s[i-1] + 1
        s[i] = 0
    if s[0] == 10:
        s[0] = 0
        s = [1] + s
    for i in s:
        print(i,end='')
    print()