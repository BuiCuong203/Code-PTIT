import math


class DiemTB:
    def __init__(self, id, ten, diem1, diem2, diem3):
        self.id = id
        self.ten = ten
        self.diem1 = diem1
        self.diem2 = diem2
        self.diem3 = diem3
    def diem(self):
        return math.ceil(((self.diem1 * 3 + self.diem2 * 3 + self.diem3 * 2) / 8) * 100) / 100
    def __str__(self):
        return f'{self.id} {self.ten} {self.diem():.2f}'

a = []
for t in range(int(input())):
    ten = ' '.join(i.title() for i in input().strip().split())
    diem1 = int(input())
    diem2 = int(input())
    diem3 = int(input())
    id = "SV{:02d}".format(t + 1)
    a.append(DiemTB(id, ten, diem1, diem2, diem3))
a.sort(key = lambda self: (-self.diem(), self.id))
d = []
cnt = 0
res = 1
for i in a:
    if i.diem() not in d:
        d.append(i.diem())
        cnt += res
        print(str(i) + " " + str(cnt))
        res = 1
    else:
        print(str(i) + " " + str(cnt))
        res += 1