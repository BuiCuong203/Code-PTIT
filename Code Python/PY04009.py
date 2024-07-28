class SP:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __str__(self):
        if self.b >= 0:
            return f'{self.a} + {self.b}i'
        else:
            return f'{self.a} - {-self.b}i'
        
def cong(self, sp):
    return SP(self.a + sp.a, self.b + sp.b)
def nhan(self, sp):
    return SP(self.a * sp.a - self. b * sp.b, self.a * sp.b + self.b * sp.a)
    
for t in range(int(input())):
    a, b, c, d = (int(i) for i in input().split())
    sp1 = SP(a, b)
    sp2 = SP(c, d)
    sp3 = cong(sp1, sp2)
    x = nhan(sp3, sp1)
    y = nhan(sp3, sp3)
    print(x, ", ", y, sep = '')