s = input()
l = len(s)
for i in range(l - 3, 0, -3):
    s = s[:i] + ',' + s[i:]
print(s)