a = []
f = open('CONTACT.in', 'r')
for i in f:
    s = i.strip().lower()
    if s not in a:
        a.append(s)
a.sort()
for i in a:
    print(i)