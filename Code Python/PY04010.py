class SV:
    def __init__(self, ten, ns, diem1, diem2, diem3):
        self.ten = ten
        self.ns = ns
        self.diem1 = diem1
        self.diem2 = diem2
        self.diem3 = diem3
        self.tong = diem1 + diem2 + diem3
    def __str__(self):
        return "{} {} {:.1f}".format(self.ten, self.ns, self.tong)
print(SV(input(), input(), float(input()), float(input()), float(input())))