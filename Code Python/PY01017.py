for t in range(int(input())):
    s = input() + '@'
    dem = 1
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            dem += 1
        else:
            print(str(dem) + s[i], end = '')
            dem = 1
    print()