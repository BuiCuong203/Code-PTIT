class Team:
    def __init__(self, mateam, tenteam, tentruong):
        self.mateam = mateam
        self.tenteam = tenteam
        self.tentruong = tentruong

class TS:
    def __init__(self, id, ten, tenteam, tentruong):
        self.id = id
        self.ten = ten
        self.tenteam = tenteam
        self.tentruong = tentruong
    def __str__(self):
        return f'{self.id} {self.ten} {self.tenteam} {self.tentruong}'

lstteam = []
for t in range(int(input())):
    mateam = "Team{:02d}".format(t + 1)
    tenteam = input()
    tentruong = input()
    lstteam.append(Team(mateam, tenteam, tentruong))
a = []
for t in range(int(input())):
    id = "C{:03d}".format(t + 1)
    ten = input()
    team = input()
    tenteam = ""
    tentruong = ""
    for i in lstteam:
        if i.mateam == team:
            tenteam = i.tenteam
            tentruong = i.tentruong
            break
    a.append(TS(id, ten, tenteam, tentruong))
a.sort(key = lambda self: (self.ten))
for i in a:
    print(i)