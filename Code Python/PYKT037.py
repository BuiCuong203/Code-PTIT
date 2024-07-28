def doi(n, b):
    if n == 0: return "0"
    s = ''
    while n > 0:
        tmp = n % b
        if tmp < 10:
            s = str(tmp) + s
        else:
            s = str(chr(65 + tmp - 10)) + s
        n //= b
    return s

for t in range(int(input())):
    n, b = (int(i) for i in input().split())
    print(doi(n, b))