class Stack:
    def __init__(self):
        self.s = []
    def push(self, x):
        self.s.append(x)
    def pop(self):
        self.s.pop()
    def empty(self):
        return len(self.s) == 0
    def top(self):
        return self.s[-1]
    def size(self):
        return len(self.s)

dic = {}
a = []
st = Stack()
n = int(input())
for i in range(n):
    x = int(input())
    dic[x] = 0
    a.append(x)
dem = 0
for i in a:
    while st.empty() == False and i > st.top():
        dic[st.top()] -= 1
        st.pop()
        dem += 1
    if st.empty() == False:
        if i == st.top():
            dem += dic[i] + (st.size() > dic[i])
        else:
            dem += 1
    st.push(i)
    dic[i] += 1
print(dem)