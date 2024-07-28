class Rectangle:
    def __init__(self, a, b, s):
        self.a = a
        self.b = b
        self.s = s
    def __str__(self):
        if self.a <= 0 or self.b <= 0:
            return "INVALID"
        else:
            return f"{(self.a + self.b) * 2} {self.a * self.b} {self.s[0:1].upper() + self.s[1:].lower()}"

arr = input().split()
r = Rectangle(int(arr[0]), int(arr[1]), arr[2])
print(r)