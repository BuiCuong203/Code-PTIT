s = input()
n = len(s)
s = '0' + s

vs = [False] * 11
b = [0] * 11
for i in range(0, 11):
    b[i] = i
def Try(i):
    for j in range(1, n + 1):
        if not vs[j]:
            vs[j] = True
            b[i] = j
            if i == n:
                for q in range(1, n + 1):
                    print(s[b[q]],end = '')
                print()
            else:
                Try(i + 1)
            vs[j] = False
Try(1)