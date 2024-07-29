package j05014;

public class GV {
    private String ten, maxt;
    private double diem1, diem2;
    private int magv;

    public GV(int magv, String ten, String maxt, double diem1, double diem2) {
        this.ten = ten;
        this.maxt = maxt;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.magv = magv;
    }
    
    public String getMon(){
        if(maxt.charAt(0) == 'A') return "TOAN";
        else if(maxt.charAt(0) == 'B') return "LY";
        return "HOA";
    }
    
    public double getTong(){
        double diem = diem1 * 2 + diem2;
        if(maxt.charAt(1) == '1') return diem + 2.0;
        else if(maxt.charAt(1) == '2') return diem + 1.5;
        else if(maxt.charAt(1) == '3') return diem + 1.0;
        return diem;
    }
    
    public String getKq(){
        if(getTong() >= 18) return "TRUNG TUYEN";
        return "LOAI";
    }

    @Override
    public String toString() {
        return String.format("GV%02d", magv) + " " + ten + " " + getMon() + " " + String.format("%.1f", getTong()) + " " + getKq();
    }
    
}
