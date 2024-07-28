import math


class Triangle:
    def __init__(self, x1, y1, x2, y2, x3, y3):
        self.x1 = x1
        self.y1 = y1
        self.x2 = x2
        self.y2 = y2
        self.x3 = x3
        self.y3 = y3
    def __str__(self):
        ab = math.sqrt(pow(self.x1 - self.x2, 2) + pow(self.y1 - self.y2, 2))
        bc = math.sqrt(pow(self.x2 - self.x3, 2) + pow(self.y2 - self.y3, 2))
        ac = math.sqrt(pow(self.x3 - self.x1, 2) + pow(self.y3 - self.y1, 2))
        if ab + bc <= ac or ab + ac <= bc or ac + bc <= ab:
            return "INVALID"
        else:
            return '{:.3f}'.format(ab + bc + ac)
        
t = int(input())
a = []
for j in range(t):
    a += [float(i) for i in input().split()]
i = 0
for j in range(t):
    tmp = Triangle(a[i], a[i + 1], a[i + 2], a[i + 3], a[i + 4], a[i + 5])
    print(tmp)
    i += 6