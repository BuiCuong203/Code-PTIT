import math

def snt(n):
    if n < 2: return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

n = int(input())
a = list(map(int, input().split()))
b = []
for i in a:
    if i not in b:
        b.append(i)
sum = b[0]
cnt = [0] * 501
cnt[0] = b[0]
for i in range(1, len(b)):
    sum += b[i]
    cnt[i] += cnt[i - 1] + b[i]
index = -1
for i in range(len(b)):
    if snt(cnt[i]) and snt(sum - cnt[i]):
        index = i
        break
print(index) if index != -1 else print("NOT FOUND")