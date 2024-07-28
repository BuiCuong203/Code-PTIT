def check(s):
    if len(s) % 2 == 0: return 'NO'
    if s[0] == s[1]: return 'NO'
    for i in range(0, len(s) - 2, 2):
        if s[i] != s[i + 2]:
            return 'NO'
    return 'YES'

for t in range(int(input())):
    s = input()
    print(check(s))