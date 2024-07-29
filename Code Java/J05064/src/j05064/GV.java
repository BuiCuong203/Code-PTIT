package j05064;

public class GV {
    private String ma, ten;
    private int lcb;

    public GV(String ma, String ten, int lcb) {
        this.ma = ma;
        this.ten = ten;
        this.lcb = lcb;
    }
    
    public int getHsl(){
        return Integer.parseInt(ma.substring(2));
    }
    
    public int getPc(){
        String cv = ma.substring(0, 2);
        if(cv.equals("HT")) return 2000000;
        else if(cv.equals("HP")) return 900000;
        return 500000;
    }
    
    public int getLuong(){
        return lcb * getHsl() + getPc();
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + getHsl() + " " + getPc() + " " + getLuong();
    }

    public String getMa() {
        return ma.substring(0, 2);
    }
    
    
}
