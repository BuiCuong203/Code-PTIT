package j05037;

public class MH {
    private String ten, dv;
    private int ma, dongia, sl, pvc, tt, gb;

    public MH(int ma, String ten, String dv, int dongia, int sl) {
        this.ten = ten;
        this.dv = dv;
        this.ma = ma;
        this.dongia = dongia;
        this.sl = sl;
        this.pvc = Math.round((dongia * sl * 1f) * 0.05f);
        this.tt = Math.round((dongia * sl * 1f) + pvc);
        this.gb = ((Math.round(tt * 1.02f) / sl) + 99) / 100 * 100;
    }

    public int getGb() {
        return gb;
    }

    @Override
    public String toString() {
        return String.format("MH%02d", ma) + " " + ten + " " + dv + " " + pvc + " " + tt + " " + gb;
    }
    
    
}
