package j05038;

public class NV {
    private int mnv, ln, snc;
    private String ten, cv;

    public NV(int mnv, String ten, int ln, int snc, String cv) {
        this.mnv = mnv;
        this.ln = ln;
        this.snc = snc;
        this.ten = ten;
        this.cv = cv;
    }
    
    public String MNV(){
        return String.format("NV%02d", mnv);
    }
    
    public int Lt(){
        return ln * snc;
    }
    
    public int Thuong(){
        if(snc >= 25) return (int) (Lt() * 0.2f);
        if(snc >= 22) return (int) (Lt() * 0.1f);
        else return 0;
    }
    
    public int Pc(){
        if("GD".equals(cv)) return 250000;
        if("PGD".equals(cv)) return 200000;
        if("TP".equals(cv)) return 180000;
        if("NV".equals(cv)) return 150000;
        return 0;
    }
    
    @Override
    public String toString(){
        return MNV() + " " + ten + " " + Lt() + " " + Thuong() + " " + Pc() + " " + (Lt() + Thuong() + Pc());
    }
}
