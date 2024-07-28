def DFS(ke, vs, x):
    vs[x] = True
    for v in ke[x]:
        if vs[v] == False:
            DFS(ke, vs, v)

n, m, x = [int(i) for i in input().split()]
ke = [[] for _ in range(n + 1)]
for t in range(m):
    u, v = [int(i) for i in input().split()]
    ke[u].append(v)
    ke[v].append(u)
vs = [False] * (n + 1)
DFS(ke, vs, x)
check = False
for i in range(1, n + 1):
    if vs[i] == False:
        check = True
        print(i)
if not check:
    print(0)