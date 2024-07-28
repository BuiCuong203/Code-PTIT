for t in range(int(input())):
    s = input()
    tmp = 1
    for i in s:
        if i != '0':
            tmp *= int(i)
    print(tmp)