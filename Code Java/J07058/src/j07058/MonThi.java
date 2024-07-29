package j07058;

public class MonThi implements Comparable<MonThi>{
    private String ma, ten, ht;
    
    public MonThi(String ma, String ten, String ht){
        this.ma = ma;
        this.ten = ten;
        this.ht = ht;
    }

    public String getMa() {
        return ma;
    }
    
    @Override
    public int compareTo(MonThi o){
        return ma.compareTo(o.getMa());
    }
    
    @Override
    public String toString(){
        return ma + " " + ten + " " + ht;
    }
}
