n = int(input())
a = [int(i) for i in input().split()]
i = 0
while i < len(a) - 1:
    if (a[i] + a[i + 1]) % 2 == 0:
        a.pop(i + 1)
        a.pop(i)
        if i > 0:
            i -= 1
    else:
        i += 1
print(len(a))