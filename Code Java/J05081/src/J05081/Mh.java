package J05081;

class Mh implements Comparable<Mh>{
    private int id, mua, ban;
    private String ten, dv;
    
    public Mh(int id, String ten, String dv, int mua, int ban){
        this.id = id;
        this.ten = ten;
        this.dv = dv;
        this. mua = mua;
        this.ban = ban;
    }
    
    @Override
    public String toString(){
        return "MH" + String.format("%03d", id) + " " + ten + " " + dv + " " + mua + " " + ban + " " + (ban - mua);
    }

    public int getMua() {
        return mua;
    }

    public int getBan() {
        return ban;
    }
    
    
    
    @Override
    public int compareTo(Mh o){
        return (o.getBan() - o.getMua()) - (getBan() - getMua());
    }
}
