class HD:
    def __init__(self, ten, sn, id):
        self.ten = ten
        self.sn = sn
        self.id = id
        self.tong = 0
    def Tong(self):
        if self.sn <= 50: self.tong = round(self.sn * 100 * 1.02)
        elif self.sn <= 100: self.tong = round((50 * 100 + (self.sn - 50) * 150) * 1.03)
        else: self.tong = round((50 * 100 + 50 * 150 + (self.sn - 100) * 200) * 1.05)
    def __str__(self):
        return '{} {} {}'.format(self.id, self.ten, self.tong)

a = []
for t in range(int(input())):
    ten = input()
    cu = int(input())
    moi = int(input())
    sn = moi - cu
    id = 'KH{:02d}'.format(t + 1)
    a.append(HD(ten, sn, id))
for i in a:
    i.Tong()
a.sort(key = lambda self: (-self.tong))
for i in a:
    print(i)