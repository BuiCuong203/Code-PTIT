s = input()
k = int(input())
n = len(s)
if n % 2 == 1:
    n -= 1
a = []
cnt = [0] * 100
for i in range(0, n, 2):
    j = int(s[i]) * 10 + int(s[i + 1])
    cnt[j] += 1
    if j not in a:
        a.append(j)
a.sort()
check = False
for i in a:
    if cnt[i] >= k:
        print(i, cnt[i], sep = ' ')
        check = True
if not check:
    print("NOT FOUND")