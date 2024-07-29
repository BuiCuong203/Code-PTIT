package j05013;

public class TD {
    private int ma;
    private String ten;
    private double lt, th;

    public TD(int ma, String ten, double lt, double th) {
        this.ma = ma;
        this.ten = ten;
        this.lt = lt;
        this.th = th;
    }

    public double getTb(){
        double x = 0;
        if(lt <= 10) x += lt;
        else{
            lt /= 10;
            x += lt;
        }
        if(th <= 10) x += th;
        else{
            th /= 10;
            x += th;
        }
        return x /= 2;
    }
    
    public String getXl(){
        if(getTb() < 5) return "TRUOT";
        else if(getTb() >= 5 && getTb() < 8) return "CAN NHAC";
        else if(getTb() >= 8 && getTb() <= 9.5) return "DAT";
        return "XUAT SAC";
    }

    @Override
    public String toString() {
        return String.format("TS%02d", ma) + " " + ten + " " + String.format("%.2f", getTb()) + " " + getXl();
    }
    
}
