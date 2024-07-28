for i in range(int(input())):
    s = input()
    n = len(s)
    if s[0]  == s[n-2] and s[1] == s[n-1]:
        print("YES")
    else:
        print("NO")