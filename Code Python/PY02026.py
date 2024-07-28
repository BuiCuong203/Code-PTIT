n, m = [int(i) for i in input().split()]
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()
c = []
d = []
for i in a:
    if i not in c:
        c.append(i)
for i in b:
    if i not in d:
        d.append(i)
check = False
for i in c:
    if i not in d:
        print("NO")
        check = True
        break
if not check:
    print("YES")