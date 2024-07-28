def check(s):
    l = str(sum(int(i) for i in s))
    if len(l) > 1 and l == l[::-1]: return 'YES'
    else: return 'NO'

for t in range(int(input())):
    s = input()
    print(check(s))