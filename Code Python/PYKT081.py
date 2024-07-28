def check(a):
    if len(a) != 4: return False
    for i in a:
        if i.isdigit():
            if int(i) < 0 or int(i) > 255: return False
        else: return False
    return True

for t in range(int(input())):
    a = input().split(".")
    if check(a): print("YES")
    else: print("NO")