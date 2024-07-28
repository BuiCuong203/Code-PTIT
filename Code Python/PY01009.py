s = input()
dem_hoa = 0
dem_thuong = 0
for i in s:
    if i.islower(): dem_thuong += 1
    else: dem_hoa += 1
if dem_thuong >= dem_hoa:
    s = s.lower()
if dem_hoa > dem_thuong:
    s = s.upper()
print(s)