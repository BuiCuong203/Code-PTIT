package j05025;

public class GV {
    private String ten, mon;
    private int ma;

    public GV(int ma, String ten, String mon) {
        this.ten = ten;
        this.mon = mon;
        this.ma = ma;
    }

    public String getMon() {
        String k = "";
        String[] a = mon.toUpperCase().split("\\s+");
        for(int i = 0; i < a.length; i++){
            k += a[i].charAt(0);
        }
        return k;
    }

    public int getMa() {
        return ma;
    }

    public String getTen() {
        String[] a = ten.toUpperCase().split("\\s+");
        return a[a.length - 1];
    }
    
    @Override
    public String toString() {
        return String.format("GV%02d", ma) + " " + ten + " " + getMon();
    }
    
}
