class TS:
    def __init__(self, id, ten, diem, dantoc, khuvuc):
        self.id = id
        self.ten = ten
        self.diem = diem
        self.dantoc = dantoc
        self.khuvuc = khuvuc
    def Dantoc(self):
        if self.dantoc == "Kinh": return 0
        else: return 1.5
    def Khuvuc(self):
        if self.khuvuc == 1: return 1.5
        elif self.khuvuc == 2: return 1
        else: return 0
    def tong(self):
        return self.diem + self.Dantoc() + self.Khuvuc()
    def tt(self):
        if self.tong() >= 20.5: return "Do"
        else: return "Truot"
    def __str__(self):
        return f'{self.id} {self.ten} {self.tong():.1f} {self.tt()}'

a = []
for t in range(int(input())):
    ten = ' '.join(i.title() for i in input().strip().split())
    diem = float(input())
    dantoc = input()
    khuvuc = int(input())
    id = "TS{:02d}".format(t + 1)
    a.append(TS(id, ten, diem, dantoc, khuvuc))
a.sort(key = lambda self: (-self.tong(), self.id))
for i in a:
    print(i)