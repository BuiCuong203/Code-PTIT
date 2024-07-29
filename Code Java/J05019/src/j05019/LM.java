package j05019;

public class LM {
    private String tram, bd, kt;
    private long lm;
    private int ma;

    public LM(int ma, String tram, String bd, String kt, long lm) {
        this.tram = tram;
        this.bd = bd;
        this.kt = kt;
        this.lm = lm;
        this.ma = ma;
    }

    public String getTram() {
        return tram;
    }

    public long getLm() {
        return lm;
    }

    @Override
    public String toString() {
        return String.format("T%02d", ma) + " " + tram;
    }
    
}
