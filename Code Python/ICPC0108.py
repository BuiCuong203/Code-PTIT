for t in range(int(input())):
    n = int(input())
    a = sorted([int(i) for i in input().split()])
    dem = 0
    for i in range(n - 2):
        left, right = i + 1, n -1
        while left < right:
            tmp = a[i] + a[left] + a[right]
            if tmp == 0:
                dem += 1
                left += 1
            elif tmp < 0:
                left += 1
            else:
                right -= 1
    print(dem)