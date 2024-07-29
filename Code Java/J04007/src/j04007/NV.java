package j04007;

public class NV {
    private String ten, gt, ns, dc, mst, nkhd;
    public NV(String ten, String gt, String ns, String dc, String mst, String nkhd){
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this. mst = mst;
        this.nkhd = nkhd;
    }
    @Override
    public String toString(){
        return "00001" + " " + ten + " " + gt + " " + ns + " " + dc + " " + mst + " " + nkhd;
    }
}
