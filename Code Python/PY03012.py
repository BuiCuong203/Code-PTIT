class Student:
    def __init__(self, hoten, AC, submit):
        self.hoten = hoten
        self.AC = AC
        self.submit = submit

a = []
for t in range(int(input())):
    hoten = input()
    AC, submit = [int(i) for i in input().split()]
    a.append(Student(hoten, AC, submit))
a.sort(key = lambda i : (-i.AC, i.submit, i.hoten))
for i in a:
    print('{} {} {}'.format(i.hoten, i.AC, i.submit))