def check(s):
    for i in range(2, len(s)):
        if s[i] != s[i-2]:
            return False
    return True

for t in range(int(input())):
    s = input()
    if check(s):
        print("YES")
    else:
        print("NO")