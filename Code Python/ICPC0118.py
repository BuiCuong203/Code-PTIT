def check(ngay, thang):
    if thang == 1:
        if ngay < 20: return 'Ma Ket'
        else: return 'Bao Binh'
    elif thang == 2:
        if ngay < 19: return 'Bao Binh'
        else: return 'Song Ngu'
    elif thang == 3:
        if ngay < 21: return 'Song Ngu'
        else: return 'Bach Duong'
    elif thang == 4:
        if ngay < 20: return 'Bach Duong'
        else: return 'Kim Nguu'
    elif thang == 5:
        if ngay < 21: return 'Kim Nguu'
        else: return 'Song Tu'
    elif thang == 6:
        if ngay < 21: return 'Song Tu'
        else: return 'Cu Giai'
    elif thang == 7:
        if ngay < 23: return 'Cu Giai'
        else: return 'Su Tu'
    elif thang == 8:
        if ngay < 23: return 'Su Tu'
        else: return 'Xu Nu'
    elif thang == 9:
        if ngay < 23: return 'Xu Nu'
        else: return 'Thien Binh'
    elif thang == 10:
        if ngay < 23: return 'Thien Binh'
        else: return 'Thien Yet'
    elif thang == 11:
        if ngay < 23: return 'Thien Yet'
        else: return 'Nhan Ma'
    elif thang == 12:
        if ngay < 22: return 'Nhan Ma'
        else: return 'Ma Ket'

for t in range(int(input())):
    ngay, thang = [int(i) for i in input().split()]
    print(check(ngay, thang))