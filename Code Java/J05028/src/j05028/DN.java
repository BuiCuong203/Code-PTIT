package j05028;

public class DN {
    private String ma, ten;
    private int sv;

    public DN(String ma, String ten, int sv) {
        this.ma = ma;
        this.ten = ten;
        this.sv = sv;
    }

    public String getMa() {
        return ma;
    }

    public int getSv() {
        return sv;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + sv;
    }
    
    
}
