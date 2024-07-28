n = int(input())
lst = [int(i) for i in input().split()]
for i in range(1, n + 2):
    if i not in lst:
        print(i)
        break