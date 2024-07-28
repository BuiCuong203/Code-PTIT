for t in range(int(input())):
    s = input()
    tmp = ""
    a = []
    for i in s:
        if i.isdigit():
            tmp += i
        else:
            if tmp != "":
                a.append(int(tmp))
                tmp = ""
    if tmp != "": a.append(int(tmp))
    print(max(a))