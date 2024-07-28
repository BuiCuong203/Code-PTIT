class CC:
    def __init__(self, ma, ten, lop, cc):
        self.ma = ma
        self.ten = ten
        self.lop = lop
        self.cc = cc
    def diemcc(self):
        diem = 10
        for i in self.cc:
            if i == 'v': diem -= 2
            elif i == 'm': diem -= 1
        if diem < 0: diem = 0
        if diem == 0: return f'0 KDDK'
        else:
            return f'{diem}'
    def __str__(self):
        return f"{self.ma} {self.ten} {self.lop} {self.diemcc()}"

a = []
n = int(input())
for t in range(n):
    ma = input()
    ten = input()
    lop = input()
    a.append(CC(ma, ten, lop, ""))
for i in range(n):
    s = input().split()
    for j in a:
        if s[0] == j.ma:
            j.cc = s[1]
            break
for i in a:
    print(i)