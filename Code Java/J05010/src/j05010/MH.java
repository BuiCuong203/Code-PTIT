package j05010;

/**
 *
 * @author buima
 */
public class MH {
    private String ten, nhom;
    private double mua, ban, lai;
    private int ma;

    public MH(int ma, String ten, String nhom, double mua, double ban) {
        this.ma = ma;
        this.ten = ten;
        this.nhom = nhom;
        this.mua = mua;
        this.ban = ban;
        this.lai = ban - mua;
    }

    public double getLai() {
        return lai;
    }
    
    @Override
    public String toString(){
        return ma + " " + ten + " " + nhom + " " + String.format("%.2f", lai);
    }
}
