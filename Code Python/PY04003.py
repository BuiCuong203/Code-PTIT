import math

class PS:
    def __init__(self, t, m):
        self.t = t
        self.m = m
    def __str__(self):
        ucln = math.gcd(self.t, self.m)
        self.t //= ucln
        self.m //= ucln
        return f'{self.t}{"/"}{self.m}'

t, m = [int(i) for i in input().split()]
print(PS(t, m))