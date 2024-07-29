package j05043;

public class NV {
    private String ten, cv;
    private int mnv, lcb, snc;

    public NV(int mnv, String ten, String cv, int lcb, int snc) {
        this.ten = ten;
        this.cv = cv;
        this.mnv = mnv;
        this.lcb = lcb;
        this.snc = snc;
    }
    
    public String Mnv(){
        return String.format("NV%02d", mnv);
    }
    
    public int Pc(){
        if(cv.equals("GD")) return 500;
        if(cv.equals("PGD")) return 400;
        if(cv.equals("TP")) return 300;
        if(cv.equals("KT")) return 250;
        return 100;
    }
    
    public int Lc(){
        return lcb * snc;
    }
    
    public int Tu(){
        float tamung = (Lc() + Pc()) * 1f / 3f * 2f;
        if(tamung < 25000f){
            int tmp = Math.round(tamung / 1000) * 1000;
            return tmp;
        }
        return 25000;
    }
    
    public int Cl(){
        return Lc() + Pc() - Tu();
    }

    @Override
    public String toString() {
        return Mnv() + " " + ten + " " + Pc() + " " + Lc() + " " + Tu() + " " + Cl();
    }
    
}
