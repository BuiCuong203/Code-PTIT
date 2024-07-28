import math

for i in range(int(input())):
    n = int(input())
    res = '1'
    for j in range(2, int(math.sqrt(n)) + 1):
        dem = 0
        while n % j == 0:
            dem += 1
            n /= j
        if dem != 0:
            res += ' * ' + str(j) + '^' + str(dem)
    if n != 1:
        res += ' * ' + str(int(n)) + '^1'
    print(res)