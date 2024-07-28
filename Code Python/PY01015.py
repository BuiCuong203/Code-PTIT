for i in range(int(input())):
    s = input()
    tmp = True
    for i in range(len(s)-1):
        if int(s[i]) > int(s[i+1]):
            tmp = False
            break
    if tmp: print("YES")
    else: print("NO")