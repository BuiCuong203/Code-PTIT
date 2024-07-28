n, m = [int(i) for i in input().split()]
a = (map(int, input().split()))
b = [0] * 11
for i in a:
    b[i] += 1
MAX = max(b)
MAX1 = 0
for i in range(1, m + 1):
    if b[i] < MAX and b[i] > MAX1:
        MAX1 = b[i]
if MAX1 == 0:
    print("NONE")
else:
    for i in range(1, m + 1):
        if b[i] == MAX1:
            print(i)
            break