package j05074;

public class SV {
    private String msv, ten, lop;

    public SV(String msv, String ten, String lop) {
        this.msv = msv;
        this.ten = ten;
        this.lop = lop;
    }

    public String getMsv() {
        return msv;
    }

    public String getTen() {
        return ten;
    }

    public String getLop() {
        return lop;
    }

    @Override
    public String toString() {
        return msv + " " + ten + " " + lop;
    }
    
}
