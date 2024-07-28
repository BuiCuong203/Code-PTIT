n = int(input())
a = [''] * n
for i in range(n):
    a[i] = input()
hang = [0] * n
cot = [0] * n
for i in range(n):
    for j in range(n):
        if a[i][j] == 'C':
            hang[i] += 1
            cot[j] += 1
dem = 0
for i in range(n):
    dem += (hang[i] * (hang[i] - 1)) / 2
    dem += (cot[i] * (cot[i] - 1)) / 2
print(int(dem))