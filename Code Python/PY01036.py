for i in range(int(input())):
    n = int(input())
    sum = 0
    for j in range(2 - n % 2, n + 1, 2):
        sum += 1/j
    print('{:.6f}'.format(sum))