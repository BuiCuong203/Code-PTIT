package j05061;

public class XT {
    private int ma;
    private String ten, ns;
    private float lt, th;

    public XT(int ma, String ten, String ns, float lt, float th) {
        this.ma = ma;
        this.ten = ten;
        this.ns = ns;
        this.lt = lt;
        this.th = th;
    }

    public int getMa() {
        return ma;
    }
    
    public int getTuoi(){
        return 2021 - Integer.parseInt(ns.substring(6));
    }
    
    public float getThuong(){
        if(lt >= 8 && th >= 8) return 1;
        else if(lt >= 7.5 && th >= 7.5) return 0.5f;
        return 0;
    }
    
    public int getDiemtb(){
        float diem = (lt + th) / 2 + getThuong();
        if(diem >= 10) return 10;
        return Math.round(diem);
    }
    
    public String getXl(){
        if(getDiemtb() < 5) return "Truot";
        else if(getDiemtb() >= 5 && getDiemtb() <= 6) return "Trung binh";
        else if(getDiemtb() == 7) return "Kha";
        else if(getDiemtb() == 8) return "Gioi";
        return "Xuat sac";
    }

    @Override
    public String toString() {
        return String.format("PH%02d", ma) + " " + ten + " " + getTuoi() + " " + getDiemtb() + " " + getXl();
    }
}
