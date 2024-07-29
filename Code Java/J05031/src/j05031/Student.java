package j05031;

public class Student {
    private String msv, ten, lop;
    private float diem1, diem2, diem3;

    public Student(String msv, String ten, String lop, float diem1, float diem2, float diem3) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }

    public String getTen() {
        return ten;
    }

    @Override
    public String toString() {
        return msv + " " + ten + " " + lop + " " + diem1 + " " + diem2 + " " + diem3;
    }
    
}

