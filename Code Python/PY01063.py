for t in range(int(input())):
    s = input()
    str = input()
    dem = 0
    id = s.find(str)
    while id != -1:
        dem += 1
        id = s.find(str, id + len(str))
    print(dem)