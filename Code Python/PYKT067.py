from itertools import permutations
for _ in range(int(input())) :
    n = int(input())
    a = []
    for i in range(1, n + 1):
        a.append(i)
    ans = list(permutations(a))
    ans.sort(reverse=True)
    print(len(ans))
    for i in ans:
        for x in i:
            if x == '(' or x == ')' or x == ',':
                continue
            else:
                print(x, end = '')
        print(end = ' ')
    print()