class TL:
    def __init__(self, theloai, id):
        self.theloai = theloai
        self.id = id

class Phim:
    def __init__(self, id, tl, nkc, tenphim, sotap):
        self.id = id
        self.tl = tl
        self.nkc = nkc
        self.tenphim = tenphim
        self.sotap = sotap
    def change(self):
        return self.nkc[6:] + self.nkc[3:5] + self.nkc[0:2]
    def __str__(self):
        return f'{self.id} {self.tl} {self.nkc} {self.tenphim} {self.sotap}'

n, m = [int(i) for i in input().split()]
lstloai = []
for i in range(n):
    theloai = input()
    id = "TL{:03d}".format(i + 1)
    lstloai.append(TL(theloai, id))
a = []
for i in range(m):
    id = "P{:03d}".format(i + 1)
    matl = input()
    tl = ""
    for j in lstloai:
        if j.id == matl:
            tl = j.theloai
            break
    nkc = input()
    tenphim = input()
    sotap = int(input())
    a.append(Phim(id, tl, nkc, tenphim, sotap))
a.sort(key = lambda self: (self.change(), self.tenphim, -self.sotap))
for i in a:
    print(i)