class TG:
    def __init__(self, ma, ten, vao, ra):
        self.ma = ma
        self.ten = ten
        self.vao = vao
        self.ra = ra
        checkin = [int(i) for i in self.vao.split(':')]
        checkout = [int(i) for i in self.ra.split(':')]
        self.tg = checkout[0] * 60 + checkout[1] - checkin[0] * 60 - checkin[1]
        self.gio = self.tg // 60
        self.phut = self.tg % 60
    def __str__(self):
        return f'{self.ma} {self.ten} {self.gio} gio {self.phut} phut'

a = []
for t in range(int(input())):
    ma = input()
    ten = input()
    vao = input()
    ra = input()
    a.append(TG(ma, ten, vao, ra))
a.sort(key = lambda self: -self.tg)
for i in a:
    print(i)