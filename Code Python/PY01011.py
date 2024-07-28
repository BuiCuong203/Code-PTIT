def check(s):
    if s != s[::-1] or len(s) % 2 == 1:
        return False
    for i in s:
        if int(i) % 2 == 1:
            return False
    return True

for i in range(int(input())):
    n = int(input())
    for i in range(0, n):
        if check(str(i)):
            print(i, end = ' ')
    print()