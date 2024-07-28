for t in range(int(input())):
    n = int(input())
    check = False
    if n % 7 == 0:
        check = True
        print(n)
    else:
        for i in range(1000):
            l = int(str(n)[::-1])
            n += l
            if n % 7 == 0:
                print(n)
                check = True
                break
        if not check: print(-1)