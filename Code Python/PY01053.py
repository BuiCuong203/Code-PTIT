def check(s):
    l = sum(int(i) for i in s)
    if l % 3 == 0: return 'YES'
    else: return 'NO'

for t in range(int(input())):
    s = input()
    print(check(s))