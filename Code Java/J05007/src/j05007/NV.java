package j05007;

import java.text.SimpleDateFormat;
import java.util.Date;

public class NV{
    private int mnv;
    private String ten, gt, dc, mst;
    private Date ns, nkhd;

    public NV(int mnv, String ten, String gt, Date ns, String dc, String mst, Date nkhd) {
        this.mnv = mnv;
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.nkhd = nkhd;
    }

    public Date getNs() {
        return ns;
    }
    
    public String formatDate(Date date) {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        return sdf.format(date);
    }
    
    @Override
    public String toString(){
        return String.format("%05d", mnv) + " " + ten + " " + gt + " " + formatDate(ns) + " " + dc + " " + mst + " " + formatDate(nkhd)
;
    }
}
