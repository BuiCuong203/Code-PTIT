class SV:
    def __init__(self, ten, a, id):
        self.ten = ten
        self.a = a
        self.id = id
        self.tb = 0
        self.xh = ""
    def TB(self):
        sum = 0
        for i in range(len(self.a)):
            if i <=1: sum += self.a[i] * 2
            else: sum += self.a[i]
        self.tb = round(sum / 10 / 1.2, 1)
    def XH(self):
        if self.tb >= 9: self.xh = "XUAT SAC"
        elif self.tb >= 8: self.xh = "GIOI"
        elif self.tb >= 7: self.xh = "KHA"
        elif self.tb >= 5: self.xh = "TB"
        else: self.xh = "YEU"
    def __str__(self):
        return "{} {} {:.1f} {}".format(self.id, self.ten, self.tb, self.xh)

lst = []
for t in range(int(input())):
    ten = input()
    a = [float(i) for i in input().split()]
    id = 'HS{:02d}'.format(t + 1)
    lst.append(SV(ten, a, id))
for i in lst:
    i.TB()
    i.XH()
lst.sort(key = lambda self: (-self.tb))
for i in lst:
    print(i)