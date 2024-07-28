def tinh_tong(s):
    c = 0
    for i in range(0, len(s), 2):
        c += int(s[i])
    return c

def tinh_tich(s):
    l = 1
    for i in range(1, len(s), 2):
        if s[i] != '0':
            l *= int(s[i])
    if l > 1: return l
    else: return 0

for t in range(int(input())):
    s = input()
    print(tinh_tong(s), end = ' ')
    print(tinh_tich(s))