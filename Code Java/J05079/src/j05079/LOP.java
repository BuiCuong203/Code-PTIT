package j05079;

public class LOP {
    private String ma, ten, nhom, tengv;

    public LOP(String ma, String ten, String nhom, String tengv) {
        this.ma = ma;
        this.ten = ten;
        this.nhom = nhom;
        this.tengv = tengv;
    }

    public String getNhom() {
        return nhom;
    }

    public String getMa() {
        return ma;
    }

    public String getTen() {
        return ten;
    }

    @Override
    public String toString() {
        return nhom + " " + tengv;
    }
    
}
