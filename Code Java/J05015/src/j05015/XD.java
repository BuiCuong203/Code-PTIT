package j05015;

import static java.lang.Math.round;

public class XD {
    private String ten, dv, td;

    public XD(String ten, String dv, String td) {
        this.ten = ten;
        this.dv = dv;
        this.td = td;
    }
    
    public String getMa(){
        String s = "";
        String[] tmp1 = dv.split("\\s+");
        String[] tmp2 = ten.split("\\s+");
        for(int i = 0 ; i < tmp1.length;i++){
            s += tmp1[i].toUpperCase().charAt(0);
        }
        for(int i = 0 ; i < tmp2.length;i++){
            s += tmp2[i].toUpperCase().charAt(0);
        }
        return s;
    }
    
    public int getTg(){
        int t1 = Integer.parseInt("6") * 60;
        int t2 = Integer.parseInt(td.substring(0, 1)) * 60 + Integer.parseInt(td.substring(2));
        return t2 - t1;
    }
    
    public int getVt(){
        int t1 = Integer.parseInt("6") * 60;
        int t2 = Integer.parseInt(td.substring(0, 1)) * 60 + Integer.parseInt(td.substring(2));
        int t = t2 - t1;
        return (int) round(1f * 120 / (1f * t) * 60);
    }

    @Override
    public String toString() {
        return getMa() + " " + ten + " " + dv + " " + getVt() + " Km/h";
    }
    
}
