dau = ['+', '-']
check = True
s = ""

def isValid(s):
    a = int(s[0 : 2])
    b = int(s[5 : 7])
    c = int(s[10 :])
    if a < 10 or b < 10 or c < 10:
        return False
    if s[3] == '+':
        return a + b == c
    else: return a - b == c

def change(s, index, k):
    return s[0 : index] + k + s[index + 1 :]

def Try(index, check, s):
    if check: return
    if len(s) == index:
        if isValid(s):
            check = True
            print(s)
        return
    if s[index] == '?':
        if index == 3:
            for i in range(2):
                s = change(s, index, dau[i])
                Try(index + 1, check, s)
        else:
            for i in range(10):
                s = change(s, index, str(i))
                Try(index + 1, check, s)
        s = change(s, index, '?')
    else:
        Try(index + 1, check, s)

def test():
    for i in range(len(s)):
        if s[i] == '*' or s[i] == '/':
            print("WRONG PROBLEM!")
            return
    check = False
    Try(0, check, s)
    if not check:
        print("WRONG PROBLEM!")

for t in range(int(input())):
    s = input()
    test()