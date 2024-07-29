package j05056;

public class VDV {
    private int ma;
    private String ten, ns, start, end;

    public VDV(int ma, String ten, String ns, String start, String end) {
        this.ten = ten;
        this.ns = ns;
        this.start = start;
        this.end = end;
        this.ma = ma;
    }
    
    public String getUt(){
        int tuoi = 2021 - Integer.parseInt(ns.substring(6));
        if(tuoi < 18) return "00:00:00";
        else if(tuoi >= 18 && tuoi < 25) return "00:00:01";
        else if(tuoi >=25 && tuoi < 32) return "00:00:02";
        return "00:00:03";
    }
    
    public String getTttt(){
        int h1 = Integer.parseInt(start.substring(0, 2));
        int m1 = Integer.parseInt(start.substring(3, 5));
        int s1 = Integer.parseInt(start.substring(6));
        int h2 = Integer.parseInt(end.substring(0, 2));
        int m2 = Integer.parseInt(end.substring(3, 5));
        int s2 = Integer.parseInt(end.substring(6));
        int time1 = h1 * 3600 + m1 * 60 + s1;
        int time2 = h2 * 3600 + m2 * 60 + s2;
        int time3 = time2 - time1;
        int h3 = time3 / 3600;
        time3 %= 3600;
        int m3 = time3 / 60;
        int s3 = time3 % 60;
        return String.format("%02d:%02d:%02d", h3, m3, s3);
    }
    
    public String getTtXh(){
        String s = getUt();
        String e = getTttt();
        int h1 = Integer.parseInt(s.substring(0, 2));
        int m1 = Integer.parseInt(s.substring(3, 5));
        int s1 = Integer.parseInt(s.substring(6));
        int h2 = Integer.parseInt(e.substring(0, 2));
        int m2 = Integer.parseInt(e.substring(3, 5));
        int s2 = Integer.parseInt(e.substring(6));
        int time1 = h1 * 3600 + m1 * 60 + s1;
        int time2 = h2 * 3600 + m2 * 60 + s2;
        int time3 = time2 - time1;
        int h3 = time3 / 3600;
        time3 %= 3600;
        int m3 = time3 / 60;
        int s3 = time3 % 60;
        return String.format("%02d:%02d:%02d", h3, m3, s3);
    }

    @Override
    public String toString() {
        return String.format("VDV%02d", ma) + " " + ten + " " + getTttt() + " " + getUt() + " " + getTtXh();
    }
}