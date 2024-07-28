class TinhLuongMua:
    def __init__(self, ten, tg, lm, id):
        self.ten = ten
        self.tg = tg
        self.lm = lm
        self.id = id
        self.tb = round(self.lm / self.tg * 60, 2)
   
def xacdinhid(n):
    if n < 10: return "T0" + str(n)
    else: return "T" + str(n)

def time(st, en):
    timest = [int(i) for i in st.split(':')]
    timeen = [int(i) for i in en.split(':')]
    return (timeen[0] * 60 + timeen[1] - timest[0] * 10 - timest[1])

lst = []
lstten = []
ans = 1
for t in range(int(input())):
    ten = input()
    st = input()
    en = input()
    tg = time(st, en)
    lm = int(input())
    if ten not in lstten:
        lstten.append(ten)
        id = xacdinhid(ans)
        ans += 1
        lst.append(TinhLuongMua(ten, tg, lm, id))
    else:
        for i in lst:
            if ten == i.ten:
                tg += i.tg
                lm += i.lm
                id = i.id
                lst.remove(i)
                lst.append(TinhLuongMua(ten, tg, lm, id))
                break
lst.sort(key = lambda x: x.id)
for i in lst:
    print("{} {} {:.2f}".format(i.id, i.ten, i.tb))