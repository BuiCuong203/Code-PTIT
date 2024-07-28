def check(s):
    for i in range(len(s) - 1):
        if abs(ord(s[i]) - ord(s[i+1])) != 2:
            return False
    if sum(int(i) for i in s) % 10 != 0:
        return False
    return True

for i in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")