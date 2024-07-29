package j05054;

public class Student {
    private int ma;
    private String ten;
    private float diemtb;

    public Student(int ma, String ten, float diemtb) {
        this.ma = ma;
        this.ten = ten;
        this.diemtb = diemtb;
    }
    
    public String getXl(){
        if(diemtb >= 9f) return "Gioi";
        else if(diemtb < 9f && diemtb >= 7f) return "Kha";
        else if(diemtb < 7f && diemtb >= 5f) return "Trung Binh";
        return "Yeu";
    }

    public float getDiemtb() {
        return diemtb;
    }

    @Override
    public String toString() {
        return String.format("HS%02d", ma) + " " + ten + " " + diemtb + " " + getXl();
    }
    
}
