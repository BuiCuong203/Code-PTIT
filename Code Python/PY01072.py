n, k = (int(i) for i in input().split())
ds = sorted(int(i) for i in input().split())
lst = []
for i in ds:
    if i not in lst:
        lst.append(i)
n = len(lst)
lst.insert(0, 0)

b = [0] * 11
for i in range(0, 11):
    b[i] = i
def Try(i):
    for j in range(b[i - 1] + 1, n - k  + i + 1):
        b[i] = j
        if i == k:
            for q in range(1, k + 1):
                print(lst[b[q]], end = ' ')
            print()
        else:
            Try(i + 1)
Try(1)