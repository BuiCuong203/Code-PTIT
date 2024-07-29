package j05049;

public class QL {
    private String ma;
    private int nhap;

    public QL(String ma, int nhap) {
        this.ma = ma;
        this.nhap = nhap;
    }

    public String getMa() {
        return ma;
    }
    
    public int Xuat(){
        float tl = 0f;
        if(ma.charAt(0) == 'A') tl = 0.6f;
        if(ma.charAt(0) == 'B') tl = 0.7f;
        return Math.round(nhap * tl);
    }
    
    public int Dg(){
        if(ma.charAt(ma.length() - 1) == 'Y') return 110000;
        if(ma.charAt(ma.length() - 1) == 'N') return 135000;
        return 0;
    }
    
    public int Tien(){
        return Xuat() * Dg();
    }
    
    public int Thue(){
        if(ma.charAt(0) == 'A' && ma.charAt(ma.length() - 1) == 'Y') return Tien() / 100 * 8;
        if(ma.charAt(0) == 'A' && ma.charAt(ma.length() - 1) == 'N') return Tien() / 100 * 11;
        if(ma.charAt(0) == 'B' && ma.charAt(ma.length() - 1) == 'Y') return Tien() / 100 * 17;
        if(ma.charAt(0) == 'B' && ma.charAt(ma.length() - 1) == 'N') return Tien() / 100 * 22;
        return 0;
    }

    @Override
    public String toString() {
        return ma + " " + nhap + " " + Xuat() + " " + Dg() + " " + Tien() + " " + Thue();
    }
}
