package j05059;

public class BD {
    private String ma, ten;
    private float toan, ly, hoa;

    public BD(String ma, String ten, float toan, float ly, float hoa) {
        this.ma = ma;
        this.ten = ten;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
    }
    
    public float getUt(){
        String kv = ma.substring(0, 3);
        if(kv.equals("KV1")) return 0.5f;
        else if(kv.equals("KV2")) return 1;
        return 2.5f;
    }
    
    public float getTong(){
        return toan * 2 + ly + hoa + getUt();
    }

    @Override
    public String toString() {
        if(getUt() == (int)getUt() && getTong() == (int)getTong()){
            return ma + " " + ten + " " + String.format("%.0f", getUt()) + " " + String.format("%.0f", getTong()) + " ";
        }
        else{
            if(getUt() == (int)getUt()){
                return ma + " " + ten + " " + String.format("%.0f", getUt()) + " " + String.format("%.1f", getTong()) + " ";
            }
            if(getTong() == (int)getTong()){
                return ma + " " + ten + " " + String.format("%.1f", getUt()) + " " + String.format("%.0f", getTong()) + " ";
            }
        }
        return ma + " " + ten + " " + String.format("%.1f", getUt()) + " " + String.format("%.1f", getTong()) + " ";
    }
}
