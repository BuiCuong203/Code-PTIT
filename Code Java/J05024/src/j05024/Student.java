package j05024;

public class Student {
    private String msv, ten, lop, email;

    public Student(String msv, String ten, String lop, String email) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
    }

    public boolean getLop() {
        if(lop.charAt(0) == 'E') return false;
        return true;
    }

    public String getMsv() {
        return msv.substring(3, 7);
    }

    @Override
    public String toString() {
        return msv + " " + ten + " " + lop + " " + email;
    }
    
    
}
