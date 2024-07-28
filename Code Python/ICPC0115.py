def giaithua(n):
    sum = 1
    for i in range(1, n + 1):
        sum *= i
    return sum

def krish(n):
    sum = 0
    for i in str(n):
        sum += giaithua(int(i))
    if sum == n: return 'Yes'
    else: return 'No'

for t in range(int(input())):
    n = int(input())
    print(krish(n))