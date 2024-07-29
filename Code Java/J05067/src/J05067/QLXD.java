package J05067;

public class QLXD {
    private String ma;
    private int sl;

    public QLXD(String ma, int sl) {
        this.ma = ma;
        this.sl = sl;
    }
    
    public String getHang(){
        String h = ma.substring(3);
        if(h.equals("BP")) return "British Petro";
        else if(h.equals("ES")) return "Esso";
        else if(h.equals("SH")) return "Shell";
        else if(h.equals("CA")) return "Castrol";
        else if(h.equals("MO")) return "Mobil";
        return "Trong Nuoc";
    }
    
    public long getDongia(){
        char x = ma.charAt(0);
        if(x == 'X') return 128000;
        else if(x == 'D') return 11200;
        return 9700;
    }
    
    public long getThue(){
        long tien = getDongia() * sl;
        if(getHang().equals("Trong Nuoc")) return 0;
        else{
            char x = ma.charAt(0);
            if(x == 'X') return tien * 3 / 100;
            else if(x == 'D') return tien * 35 / 1000;
            else return tien * 2 / 100;
        }
    }
    
    public long getTt(){
        return getDongia() * sl + getThue();
    }

    @Override
    public String toString() {
        return ma + " " + getHang() + " " + getDongia() + " " + getThue() + " " + getTt();
    }
    
}
