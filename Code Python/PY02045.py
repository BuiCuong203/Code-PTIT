s = input()
while len(s) > 1:
    n = len(s)
    a = int(s[0 : n // 2])
    b = int(s[n // 2 :])
    s = str(a + b)
    print(s)