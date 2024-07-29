package j05023;

public class Student {
    private String msv, ten, lop, email;

    public Student(String msv, String ten, String lop, String email) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
    }

    public String getLop() {
        String k = "20" + lop.substring(1, 3);
        return k;
    }

    @Override
    public String toString() {
        return msv + " " + ten + " " + lop + " " + email;
    }
    
    
}
