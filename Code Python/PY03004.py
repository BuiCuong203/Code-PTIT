dic = {}
for t in range(int(input())):
    s = input().lower()
    for i in s:
        if not i.isalnum():
            s = s.replace(i, ' ')
    for i in s.split():
        if i in dic:
            dic[i] += 1
        else:
            dic[i] = 1
dic = sorted(dic.items(), key = lambda s: (-s[1], s[0]))
for i in dic:
    print(*i)