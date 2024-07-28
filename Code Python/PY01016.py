for i in range(int(input())):
    s = input()
    for i in range(len(s)):
        if s[i].isdigit():
            for j in range(int(s[i])):
                print(s[i-1], end = '')
    print()