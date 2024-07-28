while True:
    n = int(input())
    if n == 0:
        break
    a = []
    for t in range(n):
        x = int(input())
        a.append(x)
    MAX = max(a)
    MIN = min(a)
    if MAX == MIN:
        print("BANG NHAU")
    else:
        print(MIN, MAX, sep = ' ')