s = input()
a = []
while len(s) % 3 != 0:
    s = '0' + s
for i in range(len(s) - 1, 0, -3):
    a.append(int(s[i]) * 1 + int(s[i - 1]) * 2 + int(s[i - 2]) * 4)
a.reverse()
for i in range(len(a)):
    print(a[i], end = '')