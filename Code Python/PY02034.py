s = input()
n = len(s)
if n % 2 == 1:
    n -= 1
a = []
cnt = [0] * 100
for i in range(0, n, 2):
    k = int(s[i]) * 10 + int(s[i + 1])
    cnt[k] += 1
    if k not in a:
        a.append(k)
for i in a:
    print(i, cnt[i], sep = ' ')