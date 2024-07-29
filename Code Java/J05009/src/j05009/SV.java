package j05009;

public class SV {
    private String ten, ns;
    private float diem1, diem2, diem3, sum;
    private int mats;

    public SV(int mats, String ten, String ns, float diem1, float diem2, float diem3) {
        this.mats = mats;
        this.ten = ten;
        this.ns = ns;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
        this.sum = diem1 + diem2 + diem3;
    }

    public float getSum() {
        return sum;
    }
    
    @Override
    public String toString(){
        return mats + " " + ten + " " + ns + " " + sum;
    }
}
