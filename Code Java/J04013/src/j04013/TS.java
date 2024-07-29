package j04013;

public class TS {
    private String ma, ten;
    private float dut, toan, ly, hoa;
    
    public TS(String ma, String ten, float toan, float ly, float hoa){
        this.ma = ma;
        this.ten = ten;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
        if("KV1".equals(ma.substring(0, 3))) this.dut = 0.5f;
        if("KV2".equals(ma.substring(0, 3))) this.dut = 1.0f;
        if("KV3".equals(ma.substring(0, 3))) this.dut = 2.5f;
    }
    
    public String bd(float diem){
        int x = (int)(diem * 10);
        if(x % 10 == 0) return String.format("%.0f", diem);
        return String.format("%.1f", diem);
    }
    
    public String tb(){
        if(toan * 2 + ly + hoa + dut >= 24.f) return "TRUNG TUYEN";
        return "TRUOT";
    }
    
    @Override
    public String toString(){
        return ma + " " + ten + " " + bd(dut) + " " + bd(toan * 2 + ly + hoa) + " " + tb();
    }
}
