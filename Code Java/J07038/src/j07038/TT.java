package j07038;

public class TT {
    private SV sv;
    private DN dn;

    public TT(SV sv, DN dn) {
        this.sv = sv;
        this.dn = dn;
    }

    public String getSv() {
        return sv.getMasv();
    }

    public String getDn() {
        return dn.getMadn();
    }

    @Override
    public String toString() {
        return sv.getMasv() + " " + sv.getTensv() + " " + sv.getLop();
    }
    
}
