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

t1, m1, t2, m2 = [int(i) for i in input().split()]
print(PS(t1 * m2 + t2 * m1, m1 * m2))