class Mon:
    def __init__(self, mamon, tenmon):
        self.mamon = mamon
        self.tenmon = tenmon

class Thi:
    def __init__(self, id, ma, ten, ngaythi, giothi, nhom):
        self.id = id
        self.ma = ma
        self.ten = ten
        self.ngaythi = ngaythi
        self.giothi = giothi
        self.nhom = nhom
    def nt(self):
        return self.ngaythi[6:] + self.ngaythi[3:5] + self.ngaythi[0:2]
    def gt(self):
        return self.giothi[0:2] + self.giothi[3:]
    def __str__(self):
        return f'{self.id} {self.ma} {self.ten} {self.ngaythi} {self.giothi} {self.nhom}'

n, m = [int(i) for i in input().split()]
lstmon = []
for i in range(n):
    mamon = input()
    tenmon = input()
    lstmon.append(Mon(mamon, tenmon))
a = []
for i in range(m):
    ma, ngaythi, giothi, nhom = [i for i in input().split()]
    id = "T{:03d}".format(i + 1)
    ten = ""
    for j in lstmon:
        if j.mamon == ma:
            ten = j.tenmon
            break
    a.append(Thi(id, ma, ten, ngaythi, giothi, nhom))
a.sort(key = lambda self: (self.nt(), self.gt(), self.ma))
for i in a:
    print(i)