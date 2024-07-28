N = 10 ** 18
a = []

i = 1
while i <= N:
    j = 1
    while j <= N // i:
        k = 1
        while k <= N // (i * j):
            a.append(i * j * k)
            k *= 5
        j *= 3
    i *= 2
a.sort()

def binsearch(l, r, x):
    if l > r:
        return 'Not in sequence'
    m = (l + r) // 2
    if a[m] == x:
        return m + 1
    if a[m] < x:
        return binsearch(m + 1, r, x)
    return binsearch(l, m - 1, x)

for t in range(int(input())):
    n = int(input())
    print(binsearch(0, len(a), n))