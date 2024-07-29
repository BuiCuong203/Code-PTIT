package j05011;

public class Manage implements Comparable<Manage>{
    private String ma, ten, vao, ra;
    private int tg;

    public Manage(String ma, String ten, String vao, String ra) {
        this.ma = ma;
        this.ten = ten;
        this.tg = 60 * (Integer.parseInt(ra.substring(0, 2)) - Integer.parseInt(vao.substring(0, 2))) + (Integer.parseInt(ra.substring(3)) - Integer.parseInt(vao.substring(3)));
    }

    public String getTg() {
        int gio = tg / 60;
        int phut = tg % 60;
        return String.format("%d gio %d phut", gio, phut);
    }
    
    @Override
    public String toString(){
        return ma + " " + ten + " " + getTg();
    }
    
    @Override
    public int compareTo(Manage o) {
        return -(tg - o.tg);
    }
}
