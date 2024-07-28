def check(s):
    return s == s[::-1]

a = []
f = open('VANBAN.in', 'r')
for i in f:
    x = i.strip().split()
    for j in x:
        if check(j):
            a.append(j)
l = 0
for i in a:
    if len(i) > l:
        l = len(i)
c = []
for i in a:
    if i not in c and len(i) == l:
        print(i, a.count(i), end = ' ')
        print()
        c.append(i)