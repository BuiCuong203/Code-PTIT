import math
a = '0123456789ABCDEF'

def change(n, s):
    if n == 2: return s
    cs = int(math.log2(n))
    while len(s) % cs != 0:
        s = '0' + s
    res, cnt, tmp = "", 0, 0
    for i in range(len(s) - 1, -1, -1):
        tmp += int(s[i]) * (2 ** cnt)
        cnt += 1
        if cnt == cs:
            res += a[tmp]
            tmp = 0
            cnt = 0
    return res[::-1]

for t in range(int(input())):
    print(change(int(input()), input()))