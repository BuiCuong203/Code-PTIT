s = input()
n = len(s)
dem = 0
for i in range(n):
    if s[i] == '4' or s[i] == '7':
        dem = dem + 1
if dem == 4 or dem == 7: print("YES")
else: print("NO")