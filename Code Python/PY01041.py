def check(s):
    cmp = 1
    arr = list(int(i) for i in s)
    if len(s) < 3:
        return 'NO'
    else:
        for i in range(len(s) - 1):
            if arr[i] >= arr[i+1] and cmp == 1:
                cmp = 0
            if arr[i] <= arr[i+1] and cmp == 0:
                return 'NO'
    return 'YES'

for t in range(int(input())):
    s = input()
    print(check(s))