while(True):
    n = int(input())
    if n == 0: break
    else:
        dem = 1
        while(n != 1):
            while(n % 2 == 0):
                dem += 1
                n /= 2
            while(n % 2 != 0 and n != 1):
                dem += 1
                n = n * 3 + 1
        print(dem)