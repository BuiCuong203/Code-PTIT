package j05006;

public class NV {
    private int mnv;
    private String ten, gt, ns, dc, mst, nkhd;

    public NV(int mnv, String ten, String gt, String ns, String dc, String mst, String nkhd) {
        this.mnv = mnv;
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.nkhd = nkhd;
    }
    
    @Override
    public String toString(){
        return "000" + String.format("%02d", mnv) + " " + ten + " " + gt + " " + ns + " " + dc + " " + mst + " " + nkhd;
    }
}
