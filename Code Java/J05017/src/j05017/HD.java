package j05017;

import static java.lang.Math.round;

public class HD {
    private String ten;
    private int ma, cu, moi;

    public HD(int ma, String ten, int cu, int moi) {
        this.ten = ten;
        this.ma = ma;
        this.cu = cu;
        this.moi = moi;
    }
    public int getTong(){
        int cs = moi - cu;
        if(cs >= 0 && cs <= 50) return (int) round(cs * 100 * 1.02);
        else if(cs >= 51 && cs <= 100) return (int) round((50 * 100 + (cs - 50) * 150) * 1.03);
        return (int) round((50 * 100 + 50 * 150 + (cs - 100) * 200) * 1.05);
    }
    
    @Override
    public String toString() {
        return String.format("KH%02d", ma) + " " + ten + " " + getTong();
    }
    
}
