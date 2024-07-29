package j05082;

public class KH {
    private int ma;
    private String ten, gt, ns, dc;

    public KH(int ma, String ten, String gt, String ns, String dc) {
        this.ma = ma;
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
    }
    
    public String getTen(){
        String[] tmp = ten.trim().split("\\s+");
        String s = "";
        for(int i = 0; i < tmp.length; i++){
            s += tmp[i].toUpperCase().charAt(0);
            s += tmp[i].toLowerCase().substring(1);
            if(i != tmp.length - 1) s += " ";
        }
        return s;
    }

    public String getNs() {
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, 0);
        if(sb.charAt(4) == '/') sb.insert(3, 0);
        return sb.toString();
    }
    
    public String getSort(){
        return getNs().substring(6) + getNs().substring(3, 5) + getNs().substring(0, 2);
    }

    @Override
    public String toString() {
        return String.format("KH%03d", ma) + " " + getTen() + " " + gt + " " + dc + " " + getNs();
    }
    
}
