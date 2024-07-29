package j05016;

import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class KS {
    private String ten, sp, nhan, tra;
    private int ps, ma;

    public KS(int ma, String ten, String sp, String nhan, String tra, int ps) {
        this.ten = ten;
        this.sp = sp;
        this.nhan = nhan;
        this.tra = tra;
        this.ps = ps;
        this.ma = ma;
    }
    public long getNgay(){
        LocalDate den = LocalDate.of(Integer.parseInt(nhan.substring(6)), Integer.parseInt(nhan.substring(3, 5)), Integer.parseInt(nhan.substring(0, 2)));
        LocalDate ve = LocalDate.of(Integer.parseInt(tra.substring(6)), Integer.parseInt(tra.substring(3, 5)), Integer.parseInt(tra.substring(0, 2)));
        return ChronoUnit.DAYS.between(den, ve) + 1;
    }
    
    public long getDg(){
        char tang = sp.charAt(0);
        if(tang == '1') return getNgay() * 25 + ps;
        else if(tang == '2') return getNgay() * 34 + ps;
        else if(tang == '3') return getNgay() * 50 + ps;
        return getNgay() * 80 + ps;
    }

    @Override
    public String toString() {
        return String.format("KH%02d", ma) + " " + ten + " " + sp + " " + getNgay() + " " + getDg();
    }
    
}
