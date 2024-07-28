import math

for t in range(int(input())):
    n, x, m = [float(i) for i in input().split(" ")]
    res = math.log(m / n, 1 + x/100)
    print(math.ceil(res))