class VT:
    def __init__(self, ten, dc, kt):
        self.ten = ten
        self.dc = dc
        self.kt = kt
    def ma(self):
        s = ""
        for i in self.dc.split():
            s += i[0].upper()
        for i in self.ten.split():
            s += i[0].upper()
        return s
    def vt(self):
        tmp = [int(i) for i in self.kt.split(':')]
        tg = tmp[0] * 60 + tmp[1] - 6 * 60
        return 120 / tg * 60
    def __str__(self):
        return f'{self.ma()} {self.ten} {self.dc} {round(self.vt())} Km/h'

a = []
for t in range(int(input())):
    ten = input()
    dc = input()
    kt = input()
    a.append(VT(ten, dc, kt))
a.sort(key = lambda self: -self.vt())
for i in a:
    print(i)