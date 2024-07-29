package j05066;

public class NV implements Comparable<NV>{
    private String ma, ten;

    public NV(String ma, String ten) {
        this.ma = ma;
        this.ten = ten;
    }

    public String getTen() {
        return ten;
    }
    
    public String getCv(){
        return ma.substring(0, 2);
    }
    
    public String getHsl(){
        return ma.substring(2, 4);
    }
    
    public String getSh(){
        return ma.substring(4);
    }

    @Override
    public String toString() {
        return ten + " " + getCv() + " " + getSh() + " " + getHsl();
    }

    @Override
    public int compareTo(NV o) {
        if(!o.getHsl().equals(getHsl())) return o.getHsl().compareTo(getHsl());
        return getSh().compareTo(o.getSh());
    }
    
    
}
