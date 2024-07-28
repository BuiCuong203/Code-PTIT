n = int(input())
b = [[]] * 1001
for i in range(n):
    b[i] = [int(j) for j in input().split()]
a = []
if n == 2:
    print(int(b[0][1] / 2), int(b[0][1] / 2), sep = ' ')
else:
    a.append((b[0][1] + b[0][2] - b[1][2]) / 2)
    for i in range(1, n):
        a.append(b[0][i] - a[0])
    for i in a:
        print(int(i), end = ' ')