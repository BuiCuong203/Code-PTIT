package j05047;

public class MH {
    private String ten;
    private int sl, dg, ma;

    public MH(String ten, int ma, int sl, int dg) {
        this.ten = ten;
        this.sl = sl;
        this.dg = dg;
        this.ma = ma;
    }
    
    public String getMa(){
        String tmp = "";
        String a[] = ten.trim().split("\\s+");
        tmp += a[0].toUpperCase().charAt(0);
        tmp += a[1].toUpperCase().charAt(0);
        tmp += String.format("%02d", ma);
        return tmp;
    }
    
    public int Ck(){
        float ck = 0f;
        if(sl > 10) ck = 0.05f;
        if(sl <= 10 && sl >= 8) ck = 0.02f;
        if(sl < 8 && sl >= 5) ck = 0.01f;
        int tienck = (int)(dg * sl * ck);
        return tienck;
    }
    
    public int Tt(){
        return dg * sl - Ck();
    }

    @Override
    public String toString() {
        return getMa() + " " + ten + " " + Ck() + " " + Tt();
    }
    
    
}
