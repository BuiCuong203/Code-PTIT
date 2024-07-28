n, m = map(int, input().split())
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
for i in c:
    if i in d:
        print(i, end = ' ')
print()
for i in c:
    if i not in d:
        print(i, end = ' ')
print()
for i in d:
    if i not in c:
        print(i, end = ' ')