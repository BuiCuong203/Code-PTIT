def check(s):
    for i in range(len(s)):
        if s[i] != '0' and s[i] != '1' and s[i] !='2':
            return 'NO'
    return 'YES'

for t in range(int(input())):
    s = input()
    print(check(s))