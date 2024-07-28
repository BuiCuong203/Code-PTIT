class hd:
    def __init__(self, ma, ten, sl, gia, chietkhau):
        self.ma = ma
        self.ten = ten
        self.sl = sl
        self.gia = gia
        self.chietkhau = chietkhau
        self.tong = gia * sl - chietkhau
    def __str__(self):
        return f'{self.ma} {self.ten} {self.sl} {self.gia} {self.chietkhau} {self.tong}'
a = []
for i in range(int(input())):
    tmp = hd(input(), input(), int(input()), int(input()), int(input()))
    a.append(tmp)
a.sort(key = lambda self: (-self.tong))
for i in a:
    print(i)