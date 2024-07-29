package j05027;

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

    public String getTen() {
        return ten.toLowerCase();
    }
    
    @Override
    public String toString() {
        return String.format("GV%02d", ma) + " " + ten + " " + getMon();
    }
    
}


