class NV:
    def __init__(self, ten, lt, th, id):
        self.ten = ten
        self.lt = lt
        self.th = th
        self.id = "TS0" + str(id)
        self.tb = 0
        if(self.lt > 10): self.lt /= 10
        if(self.th > 10): self.th /= 10
    def Tb(self):
        return (self.lt + self.th) / 2
    def Xl(self):
        if self.Tb() < 5: return "TRUOT"
        elif self.Tb() >= 5 and self.Tb() < 8: return "CAN NHAC"
        elif self.Tb() >= 8 and self.Tb() <= 9.5: return "DAT"
        else: return "XUAT SAC"
    def __str__(self):
        return f'{self.id} {self.ten} {self.Tb():.2f} {self.Xl()}'

a = []
for t in range(int(input())):
    ten = input()
    lt = float(input())
    th = float(input())
    id = t + 1
    a.append(NV(ten, lt, th, id))
a.sort(key = lambda self: (-self.Tb()))
for i in a:
    print(i)