package j05052;

public class DH {
    private String ten, mdh;
    private long gia, sl;

    public DH(String ten, String mdh, long gia, long sl) {
        this.ten = ten;
        this.mdh = mdh;
        this.gia = gia;
        this.sl = sl;
    }
    
    public String getStt(){
        return mdh.substring(1, 4);
    }
    
    public String getMa(){
        return Character.toString(mdh.charAt(mdh.length() - 1));
    }
    
    public long giamgia(){
        if (getMa().equals("1")) return sl * gia * 50 / 100;
        else return sl * gia * 30 / 100;
    }
    
    public long getTt(){
        return sl * gia - giamgia();
    }

    @Override
    public String toString() {
        return ten + " " + mdh + " " + getStt() + " " + giamgia() + " " + getTt();
    }
}