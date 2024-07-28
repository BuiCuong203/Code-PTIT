import datetime

class KS:
    def __init__(self, ten, phong, st, en, ps, ma):
        self.ten = ten
        self.phong = phong
        self.st = st
        self.en = en
        self.ps = ps
        self.ma = ma
    def Songay(self):
        if self.st == self.en: return 1
        timein = datetime.datetime.strptime(self.st, '%d/%m/%Y')
        timeout = datetime.datetime.strptime(self.en, '%d/%m/%Y')
        time = str(timeout - timein)
        time = [i for i in time.split()]
        return int(time[0]) + 1
    def Tinhtien(self):
        tang = self.phong[0]
        if tang == '1': return self.Songay() * 25 + self.ps
        elif tang == '2': return self.Songay() * 34 + self.ps
        elif tang == '3': return self.Songay() * 50 + self.ps
        else: return self.Songay() * 80 + self.ps
    def __str__(self):
        return f'{self.ma} {self.ten} {self.phong} {self.Songay()} {self.Tinhtien()}'

a = []
for t in range(int(input())):
    ten = input()
    phong = input()
    st = input().strip()
    en = input().strip()
    ps = int(input().strip())
    ma = "KH{:02d}".format(t + 1)
    a.append(KS(ten, phong, st, en, ps, ma))
a.sort(key = lambda self: -self.Tinhtien())
for i in a:
    print(i)