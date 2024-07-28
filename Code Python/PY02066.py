n = int(input())
cnt = 0
a = [0] * 201
MAX = -1
while True:
    if cnt == n: break
    b = [int(i) for i in input().split()]
    cnt += len(b)
    for i in b:
        a[i] = 1
        MAX = max(MAX, i)
check = False
for i in range(1, MAX + 1):
    if a[i] == 0:
        check = True
        print(i)
if not check:
    print("Excellent!")