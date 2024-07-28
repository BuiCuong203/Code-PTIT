from itertools import count

n = int(input())
lst = [float(i) for i in input().split()]
max = max(lst)
min = min(lst)
a = []
for i in lst:
    if i != min and i != max:
        a.append(i)
print("{:.2f}".format(sum(a) / len(a)))