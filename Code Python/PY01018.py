P = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_.'
while True:
    n = input()
    if n == '0': break
    else:
        k, s = n.split()
        k = int(k)
        res = ''
        for i in range(len(s)):
            j = P.find(s[i])
            res += P[(j + k) % 28]
        print(res[::-1])