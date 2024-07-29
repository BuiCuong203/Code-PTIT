package j05036;

public class MH {
    private String ten, dv;
    private int ma, dongia, sl, pvc, tt, gb;

    public MH(int ma, String ten, String dv, int dongia, int sl) {
        this.ten = ten;
        this.dv = dv;
        this.ma = ma;
        this.dongia = dongia;
        this.sl = sl;
        this.pvc = (int) Math.round((dongia * sl) * 0.05);
        this.tt = (int) Math.round((dongia * sl) + pvc);
        this.gb = (int) Math.round(tt * 1.02);
    }

    @Override
    public String toString() {
        return String.format("MH%02d", ma) + " " + ten + " " + dv + " " + pvc + " " + tt + " " + gb;
    }
    
    
}
