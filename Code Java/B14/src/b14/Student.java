package b14;

public class Student {
    private String msv, ten, lop, email, sdt;

    public Student(String msv, String ten, String lop, String email, String sdt) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
        this.sdt = sdt;
    }

    public String getSdt() {
        return "0" + sdt;
    }

    public String getMsv() {
        return msv;
    }

    public String getLop() {
        return lop;
    }
    
    @Override
    public String toString() {
        return msv + " " + ten + " " + lop + " " + email + " " + getSdt();
    }

}
