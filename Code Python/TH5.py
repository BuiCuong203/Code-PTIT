n, k = (int(i) for i in input().split())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
sum = 0
c = []
for i in range(n):
    c.append(a[i] - b[i])
index = list(range(len(c)))
index = sorted(index, key = lambda i: c[i])
a = [a[i] for i in index]
b = [b[i] for i in index]
for i in range(n):
    if k != 0:
        sum += a[i]
        k -= 1
    else:
        sum += b[i]
print(sum)