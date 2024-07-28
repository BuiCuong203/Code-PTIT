class TT:
    def __init__(self, ten, ma, diemtin, diemcm, id):
        self.ten = ten
        self.ma = ma
        self.diemtin = diemtin
        self.diemcm = diemcm
        self.id = id
    def mon(self):
        if self.ma[0] == 'A': return "TOAN"
        elif self.ma[0] == 'B': return "LY"
        else: return "HOA"
    def tong(self):
        sum = self.diemtin * 2 + self.diemcm
        uutien = self.ma[1]
        if uutien == '1': sum += 2.0
        elif uutien == '2': sum += 1.5
        elif uutien == '3': sum += 1.0
        return sum
    def xt(self):
        if self.tong() >= 18: return "TRUNG TUYEN"
        return "LOAI"
    def __str__(self):
        return "{} {} {} {:.1f} {}".format(self.id, self.ten, self.mon(), self.tong(), self.xt())

a = []
for t in range(int(input())):
    ten = input()
    ma = input()
    diemtin = float(input())
    diemcm = float(input())
    id = "GV{:02d}".format(t + 1)
    a.append(TT(ten, ma, diemtin, diemcm, id))
a.sort(key = lambda self: -self.tong())
for i in a:
    print(i)