import textwrap

for t in range(int(input())):
    s = input()
    print(textwrap.shorten(s, 100, placeholder=' '))