def count(n, p):
    x = 1
    cnt = 0
    while n / (p ** x) > 1:
        cnt += int(n / (p ** x))
        x += 1
    return cnt

for t in range(int(input())):
    n, p = [int(i) for i in input().split()]
    print(count(n, p))