for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    cnt = [0] * (10 ** 6 + 1)
    for i in a:
        cnt[i] += 1
    for i in a:
        if cnt[i] % 2 != 0:
            print(i)
            break