package j05050;

public class TD {
    private String loaiSD;
    private int cu, moi, ma;

    public TD(int ma, String loaiSD, int cu, int moi) {
        this.loaiSD = loaiSD;
        this.cu = cu;
        this.moi = moi;
        this.ma = ma;
    }
    
    public String getMa(){
        return String.format("KH%02d", ma);
    }
    
    public int HS(){
        if(loaiSD.equals("KD")) return 3;
        if(loaiSD.equals("NN")) return 5;
        if(loaiSD.equals("TT")) return 4;
        return 2;
    }
    
    public int TT(){
        return (moi - cu) * HS() * 550;
    }
    
    public int PT(){
        if(moi - cu < 50) return 0;
        if(moi - cu <= 100 && moi - cu >= 50) return Math.round(TT() * 0.35f);
        return TT();
    }
    
    public int Tong(){
        return TT() + PT();
    }

    @Override
    public String toString() {
        return getMa() + " " + HS() + " " + TT() + " " + PT() + " " + Tong();
    }
    
    
}
