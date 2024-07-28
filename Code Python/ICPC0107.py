for t in range(int(input())):
    p, q = input().split()
    str = input().split()
    if len(str) == 1:
       x1 = str[0]
       x2 = input()
    else:
        x1, x2 = str 
    num1 = int(x1.replace(p, q)) + int(x2.replace(p, q))
    num2 = int(x1.replace(q, p)) + int(x2.replace(q, p))
    print(min(num1, num2), max(num1, num2), sep = ' ')