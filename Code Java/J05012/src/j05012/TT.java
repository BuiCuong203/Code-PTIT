package j05012;

public class TT {
    private String ma, ten;
    private long sl, dg, ck;

    public TT(String ma, String ten, long sl, long dg, long ck) {
        this.ma = ma;
        this.ten = ten;
        this.sl = sl;
        this.dg = dg;
        this.ck = ck;
    }
    
    public long getTien(){
        return dg * sl - ck;
    }
    
    @Override
    public String toString() {
        return ma + " " + ten + " " + sl + " " + dg + " " + ck + " " + getTien();
    }
     
}
